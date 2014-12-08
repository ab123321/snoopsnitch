package de.srlabs.msd.views.adapter;

import java.util.Vector;

import android.content.Context;
import android.graphics.Color;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;
import de.srlabs.msd.R;
import de.srlabs.msd.analysis.Risk;
import de.srlabs.msd.util.MSDServiceHelperCreator;
import de.srlabs.msd.views.DashboardProviderList;

public class ListViewProviderAdapter extends ArrayAdapter<Risk>
{
	private Context context;
	private Vector<Risk> values;
	private Risk risk;

	public ListViewProviderAdapter(Context context, Vector<Risk> values) 
	{
		super(context, R.layout.custom_row_layout_provider);
		
		this.context = context;
		this.values = values;
		
		this.risk = MSDServiceHelperCreator.getInstance().getMsdServiceHelper().getData().getScores();
		
		// Add result data to values list
		values.insertElementAt(risk, 0);
	}

	
	@Override
	public View getView(int position, View convertView, ViewGroup parent) 
	{
		LayoutInflater inflater = (LayoutInflater) context
				.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
		
		View rowView;
		
		if (position == 0)
		{
			rowView = inflater.inflate(R.layout.custom_row_layout_provider, parent, false);
			
			// Set result
			((DashboardProviderList) rowView.findViewById(R.id.dashboardProviderList1)).setResult(true);
		}
		else if (values.elementAt(position).getOperatorName().equals(risk.getOperatorName()))
		{
			rowView = inflater.inflate(R.layout.custom_row_layout_own_provider, parent, false);
			
			DashboardProviderList dpl = ((DashboardProviderList) rowView.findViewById(R.id.dashboardProviderList1));
			
			// Set own provider
			((DashboardProviderList) rowView.findViewById(R.id.dashboardProviderList1)).setOwnProvider(true);
			
			// Set provider name
			((TextView) rowView.findViewById(R.id.txtProviderName)).setText(values.elementAt(position).getOperatorName());
			
			// Set provider color
			dpl.setColor(Color.parseColor(values.elementAt(position).getOperatorColor()));
		}
		else
		{
			rowView = inflater.inflate(R.layout.custom_row_layout_provider, parent, false);
			
			DashboardProviderList dpl = ((DashboardProviderList) rowView.findViewById(R.id.dashboardProviderList1));
			
			// Set provider name
			((TextView) rowView.findViewById(R.id.txtProviderName)).setText(values.elementAt(position).getOperatorName());
			
			// Set provider color
			dpl.setColor(Color.parseColor(values.elementAt(position).getOperatorColor()));
		}
	
		
		return rowView;
	}
	
	@Override
	public int getCount() 
	{
		return values.size();
	}
}