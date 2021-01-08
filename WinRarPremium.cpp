#include <iostream>
#include <fstream>
#include <Windows.h>
int main()
{
    SetConsoleTitle(TEXT("WinRar Premium Activator - Made by Kye"));
        std::string path = "C:\\Program Files\\WinRAR\\rarreg.key";
        try
        {
            std::cout << "Writing License Key to " << path << std::endl << std::endl;
            std::ofstream myfile;
            myfile.open(path);
            myfile << "RAR registration data\nWinRAR User\nUnlimited Company License\nUID = 6dae1dee6409dd6da253\n6412212250a253532d8546a28efe9484f795481b550464fe4a0b4b\n91ffcd3ee5585f7cac9560fce6cb5ffde62890079861be57638717\n7131ced835ed65cc743d9777f2ea71a8e32c7e593cf66794343565\nb41bcf56929486b8bcdac33d50ecf77399605bdebab87edaeb8dd3\n5dbad8f0e8abfccfc320ddc95380b83e38123f258f3a336d2e7dd7\n780d739f352cad99f20aa63799cdbcd0f785987f9029d679607cae\n2f4ccc1ff9855dd20554f50ef315d916f31ec40d4cd21747221993 ";
            printf("====\nWinRar Premium is now Actived!\n===\nPress enter to close this window..");
        }
        catch (const std::exception& e)
        {
            printf(e.what());
        }
    std::cin.get();
}