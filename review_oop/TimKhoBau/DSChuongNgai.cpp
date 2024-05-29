#include "DSChuongNgai.h"

void DSChuongNgai::nhap()
{
    cout << "Nhap so chuong ngai: ";
    int n, temp;
    cin >> n;
    pChuongNgai.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "chuong ngai thu " << i << "\n";
        do
        {
            cout << "1_Rung Chong, 2_Duong ham, 3_Quai vat: ";
            cin >> temp;
            switch (temp)
            {
            case 1:
                pChuongNgai[i] = new RungChong;
                break;
            case 2:
                pChuongNgai[i] = new DuongHam;
                break;
            case 3:
                pChuongNgai[i] = new QuaiVat;
                break;
            default:
                break;
            }
        } while (temp != 1 && temp != 2 && temp != 3);
        pChuongNgai[i]->ThietLap();
    }
}

bool DSChuongNgai::TimDuocKhoBau(NguoiChoi a)
{
    for (int i = 0; i < pChuongNgai.size(); i++)
    {
        if (pChuongNgai[i]->VuotQua(a) == 0)
        {
            cout << "Nguoi choi ko tim duoc kho bau!";
            return 0;
        }
    }
    cout << "Nguoi choi tim duoc kho bau: ";
    return 1;
}
