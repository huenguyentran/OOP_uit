#include "AExporter.h"

void AExporter::Export(string tenFile, string nd)
{
	filename = tenFile + "_A.txt";
	ofstream outfile(filename);
	if (outfile.is_open())
	{
		outfile << "A Exporter\n";
		outfile << nd;
		outfile.close();
		return;
	}
	else
	{
		cout << "error\n";
	}
}
