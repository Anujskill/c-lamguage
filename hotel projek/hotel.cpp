#include<iostream>

using  namespace std;

int choice;
int ch;
int qty[1000];
int n[1000];
int price;
int amount;
int total = 0;
float discount;
float sgst, cgst;



int calc(int p)
{

    float discount;
    float sgst, cgst;
    float bill;

    discount = (p * 10) / 100;
    sgst = (p * 2.5) / 100;
    cgst = (p * 2.5) / 100;
    bill = p - discount + sgst + cgst;
    cout << "\t\t=======================================" << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\t *Total bill=" << p << endl;
    cout << "\t\t *Discount=" << discount << endl;
    cout << "\t\t *SGST=" << sgst << endl;
    cout << "\t\t *CGST=" << cgst << endl;
    cout << "\t\t *payable amount=" << bill << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\t        Thank you visit again." << endl;
    cout << "\t\t=======================================" << endl;
}


class SOUP{
    public:
    void soupdata(){
        cout<<"1) Cream of Tomato Soup.........................................................125"<<endl;
        cout<<"2) Cheese Corn Tomato Soup .....................................................145"<<endl;
        cout<<"3) Minestrone Soup..............................................................145"<<endl;
        cout<<"4) Lemon Coriander Soup.........................................................140"<<endl;
        cout<<"5) Veg. Clear Soup..............................................................140"<<endl;
        cout<<"6) Hot & Sour Soup..............................................................145"<<endl;
        cout<<"7) Veg. Manchow Soup............................................................155"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : ";
        cin >> n[0];
        amount = 125 * n[0];
        total += amount;
        qty[0] += n[0];
        break;
    case 2 :
        cout << " Enter Please Quantity : ";
        cin >> n[1];
        amount = 145 * n[1];
        total += amount;
        qty[1] += n[1];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[2];
        amount = 145 * n[2];
        total += amount;
        qty[2] += n[2];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[3];
        amount = 140 * n[3];
        total += amount;
        qty[3] += n[3];
        break;
    case 5 :
        cout << "Enter Please Quantity : " ;
        cin >> n[4];
        amount = 140 * n[4];
        total += amount;
        qty[4] += n[4];
        break;
    case 6 :
        cout << "Enter Please Quantity : " ;
        cin >> n[5];
        amount = 145 * n[5];
        total += amount;
        qty[5] += n[5];
        break;
    case 7 :
        cout << "Enter Please Quantity : " ;
        cin >> n[6];
        amount = 155 * n[6];
        total += amount;
        qty[6] += n[6];
        break;
    }        
}


    
};


class SALAD : public SOUP{
    public:
    void SALADdata(){
        cout<<"1) Cucumber Salad...............................................................100"<<endl;
        cout<<"2) Jain Salad...................................................................110"<<endl;
        cout<<"3) Veg. Raita...................................................................120"<<endl;
        cout<<"4) Boondi Raita.................................................................120"<<endl;
        cout<<"5) Italian Tossed Salad.........................................................140"<<endl;
        cout<<"6) American Corn Salad..........................................................145"<<endl;
        cout<<"7) Fresh Fruit Cut..............................................................180"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : " ;
        cin >> n[7];
        amount = 100 * n[7];
        total += amount;
        qty[7] += n[7];
        break;
    case 2 :
        cout << "Enter Please Quantity : " ;
        cin >> n[8];
        amount = 110 * n[8];
        total += amount;
        qty[8] += n[8];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[9];
        amount = 120 * n[9];
        total += amount;
        qty[9] += n[9];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[10];
        amount = 120 * n[10];
        total += amount;
        qty[10] += n[10];
        break;
    case 5 :
        cout << "Enter Please Quantity : " ;
        cin >> n[11];
        amount = 140 * n[11];
        total += amount;
        qty[11] += n[11];
        break;
    case 6 :
        cout << "Enter Please Quantity : " ;
        cin >> n[12];
        amount = 145 * n[12];
        total += amount;
        qty[12] += n[12];
        break;
    case 7 :
        cout << "Enter Please Quantity : " ;
        cin >> n[12];
        amount = 180 * n[12];
        total += amount;
        qty[12] += n[12];
        break;
    }
        // exitanuj(total);
}
    
};
class STARTERS : public SALAD{
    public:
    void STARTERSdata(){
        cout<<"1) Peshawari Paneer Tikka.......................................................240"<<endl;
        cout<<"2) Tandoori Paneer Tikka........................................................240"<<endl;
        cout<<"3) Hariyali Paneer Tikka........................................................250"<<endl;
        cout<<"4) Veg. Seekh Kebab.............................................................250"<<endl;
        cout<<"5) Raja Kebab...................................................................250"<<endl;
        cout<<"6) Paneer Seekh Kebab...........................................................270"<<endl;
        cout<<"7) Special Milestone Plater.....................................................370"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : " ;
        cin >> n[13];
        amount = 240 * n[13];
        total += amount;
        qty[13] += n[13];
        break;
    case 2 :
        cout << "Enter Please Quantity : " ;
        cin >> n[14];
        amount = 240 * n[14];
        total += amount;
        qty[14] += n[14];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[15];
        amount = 250 * n[15];
        total += amount;
        qty[15] += n[15];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[16];
        amount = 250 * n[16];
        total += amount;
        qty[16] += n[16];
        break;
    case 5 :
        cout << "Enter Please Quantity : " ;
        cin >> n[17];
        amount = 250 * n[17];
        total += amount;
        qty[17] += n[17];
        break;
    case 6 :
        cout << "Enter Please Quantity : " ;
        cin >> n[18];
        amount = 270 * n[18];
        total += amount;
        qty[18] += n[18];
        break;
    case 7 :
        cout << "Enter Please Quantity : " ;
        cin >> n[19];
        amount = 370 * n[19];
        total += amount;
        qty[19] += n[19];
        break;
    }
}
    
};

class SODA : public STARTERS{
    public:
    void SODAdata(){
        cout<<"1) Apple.......................................................100"<<endl;
        cout<<"2) Pineapple...................................................110"<<endl;
        cout<<"3) Sweet Lime..................................................110"<<endl;
        cout<<"4) Fresh Lime..................................................130"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : " ;
        cin >> n[20];
        amount = 100 * n[20];
        total += amount;
        qty[20] += n[20];
        break;
    case 2 :
        cout << "Enter Please Quantity : " ;
        cin >> n[21];
        amount = 110 * n[21];
        total += amount;
        qty[21] += n[21];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[22];
        amount = 110 * n[22];
        total += amount;
        qty[22] += n[22];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[23];
        amount = 130 * n[23];
        total += amount;
        qty[23] += n[23];
        break;
    }
}
    
};
class MAIN_COURSE : public SODA{
    public:
    void MAINCOURSE(){
        cout<<"1) Paneer Angara................................................................250"<<endl;
        cout<<"2) Paneer Pasanda...............................................................240"<<endl;
        cout<<"3) Paneer Lababdar..............................................................250"<<endl;
        cout<<"4) Paneer Tawa Masala...........................................................250"<<endl;
        cout<<"5) Paneer Toofani...............................................................250"<<endl;
        cout<<"6) Paneer Handi.................................................................270"<<endl;
        cout<<"7) Paneer Kadai.................................................................370"<<endl;
        cout<<"8) Paneer Tikka Masala..........................................................370"<<endl;
        cout<<"9) Paneer Butter Masala.........................................................370"<<endl;
        cout<<"10) Paneer Palak................................................................370"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : " ;
        cin >> n[24];
        amount = 250 * n[24];
        total += amount;
        qty[24] += n[24];
        break;
    case 2 :
        cout << "Enter Please Quantity : " ;
        cin >> n[25];
        amount = 240 * n[25];
        total += amount;
        qty[25] += n[25];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[26];
        amount = 250 * n[26];
        total += amount;
        qty[25] += n[25];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[27];
        amount = 250 * n[27];
        total += amount;
        qty[27] += n[27];
        break;
    case 5 :
        cout << "Enter Please Quantity : " ;
        cin >> n[28];
        amount = 250 * n[28];
        total += amount;
        qty[28] += n[28];
        break;
    case 6 :
        cout << "Enter Please Quantity : " ;
        cin >> n[29];
        amount = 270 * n[29];
        total += amount;
        qty[29] += n[29];
        break;
    case 7 :
        cout << "Enter Please Quantity : " ;
        cin >> n[30];
        amount = 270 * n[30];
        total += amount;
        qty[30] += n[30];
        break;
    case 8 :
        cout << "Enter Please Quantity : " ;
        cin >> n[31];
        amount = 270 * n[31];
        total += amount;
        qty[31] += n[31];
        break;
    case 9 :
        cout << "Enter Please Quantity : " ;
        cin >> n[32];
        amount = 270 * n[32];
        total += amount;
        qty[32] += n[32];
        break;
    case 10 :
        cout << "Enter Please Quantity : " ;
        cin >> n[33];
        amount = 270 * n[33];
        total += amount;
        qty[33] += n[33];
        break;
    }
    
    
}

  void rotietanduri(){
        cout<<"1) Cheese Nan...................................................................95"<<endl;
        cout<<"2) Hariyali Nan.................................................................85"<<endl;
        cout<<"3) Kashmiri Nan.................................................................98"<<endl;
        cout<<"4) Plain Nan....................................................................55"<<endl;
        cout<<"5) Butter Nan...................................................................60"<<endl;
        cout<<"6) Stuffed Masala Nan...........................................................75"<<endl;
        cout<<"7) Onion Kulcha.................................................................65"<<endl;
        cout<<"8) Masala Kulcha................................................................55"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : " ;
        cin >> n[34];
        amount = 95 * n[34];
        total += amount;
        qty[34] += n[34];
        break;
    case 2 :
        cout << "Enter Please Quantity : " ;
        cin >> n[35];
        amount = 85 * n[35];
        total += amount;
        qty[35] += n[35];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[36];
        amount = 98 * n[36];
        total += amount;
        qty[36] += n[36];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[37];
        amount = 55 * n[37];
        total += amount;
        qty[37] += n[37];
        break;
    case 5 :
        cout << "Enter Please Quantity : " ;
        cin >> n[38];
        amount = 60 * n[38];
        total += amount;
        qty[38] += n[38];
        break;
    case 6 :
        cout << "Enter Please Quantity : " ;
        cin >> n[39];
        amount = 75 * n[39];
        total += amount;
        qty[39] += n[39];
        break;
    case 7 :
        cout << "Enter Please Quantity : " ;
        cin >> n[40];
        amount = 65 * n[40];
        total += amount;
        qty[40] += n[40];
        break;
    case 8 :
        cout << "Enter Please Quantity : " ;
        cin >> n[41];
        amount = 55 * n[41];
        total += amount;
        qty[41] += n[41];
        break;
    }
    
    
}
    
};
class DESSERTS : public MAIN_COURSE{
    public:
    void DESSERTSdata(){
        cout<<"1) Sunday Special Ice-cream.....................................................170"<<endl;
        cout<<"2) Almond Carnival Ice-cream....................................................55"<<endl;
        cout<<"3) Kesar Pista Ice-cream........................................................55"<<endl;
        cout<<"4) Kaju Draksh Ice-cream........................................................45"<<endl;
        cout<<"5) Butter Scotch Ice-cream......................................................45"<<endl;
        cout<<"6) Strawberry Ice-cream.........................................................50"<<endl;

        cout<<"Enter Please Order :";
        cin>>choice;
        cout<<"\n";
    switch(choice)
    {
    case 1 :
        cout << "Enter Please Quantity : " ;
        cin >> n[42];
        amount = 170 * n[42];
        total += amount;
        qty[42] += n[42];
        break;
    case 2 :
        cout << "Enter Please Quantity : " ;
        cin >> n[43];
        amount = 55 * n[43];
        total += amount;
        qty[43] += n[43];
        break;
    case 3 :
        cout << "Enter Please Quantity : " ;
        cin >> n[44];
        amount = 55 * n[44];
        total += amount;
        qty[44] += n[44];
        break;
    case 4 :
        cout << "Enter Please Quantity : " ;
        cin >> n[45];
        amount = 45 * n[45];
        total += amount;
        qty[45] += n[45];
        break;
    case 5 :
        cout << "Enter Please Quantity : " ;
        cin >> n[46];
        amount = 45 * n[46];
        total += amount;
        qty[46] += n[46];
        break;
    case 6 :
        cout << "Enter Please Quantity : " ;
        cin >> n[47];
        amount = 50 * n[47];
        total += amount;
        qty[47] += n[47];
        break;
    }
    
    
}
    
};

class exitanuj : public DESSERTS
{
    public:
    void aa(){
    cout << "\t\t=======================================" << endl;
    cout << "\t\t<<<<<<<<<welcome to omhotel.>>>>>>>>>" << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\tItem......"
         << "\t\t"
         << "Qty"
         << "\t"
         << "Price"
         << "\t"
         << "total" << endl;
    if (qty[0] != 0)
        cout << "\t\t1.Cream of Tomato Soup"
             << "\t" << qty[0] << "\t"
             << "125"
             << "\t" << 125 * qty[0] << endl;
    if (qty[1] != 0)
        cout << "\t\t2.Cheese Corn Tomato Soup"
             << "\t" << qty[1] << "\t"
             << "145"
             << "\t" << 145 * qty[1] << endl;
    if (qty[2] != 0)
        cout << "\t\t3.Minestrone Soup"
             << "\t\t" << qty[2] << "\t"
             << "145"
             << "\t" << 145 * qty[2] << endl;
    if (qty[3] != 0)
        cout << "\t\t4.Lemon Coriander Soup"
             << "\t" << qty[3] << "\t"
             << "140"
             << "\t" << 140 * qty[3] << endl;
    if (qty[4] != 0)
        cout << "\t\t5.Veg. Clear Soup"
             << "\t" << qty[4] << "\t"
             << "140"
             << "\t" << 140 * qty[4] << endl;
    if (qty[5] != 0)
        cout << "\t\t6.Hot & Sour Soup"
             << "\t" << qty[5] << "\t"
             << "145 "
             << "\t" << 145 * qty[5] << endl;
    if (qty[6] != 0)
        cout << "\t\t1.Veg. Manchow Soup"
             << "\t" << qty[6] << "\t"
             << "155"
             << "\t" << 155 * qty[6] << endl;
    if (qty[7] != 0)
        cout << "\t\t2.Cucumber Salad"
             << "\t\t" << qty[7] << "\t"
             << "100"
             << "\t" << 100 * qty[7] << endl;
    if (qty[8] != 0)
        cout << "\t\t3.Jain Salad"
             << "\t\t" << qty[8] << "\t"
             << "110"
             << "\t" << 110 * qty[8] << endl;
    if (qty[9] != 0)
        cout << "\t\t4.Veg. Raita"
             << "\t\t" << qty[9] << "\t"
             << "120"
             << "\t" << 120 * qty[9] << endl;
    if (qty[10] != 0)
        cout << "\t\t5.Boondi Raita"
             << "\t\t" << qty[10] << "\t"
             << "120"
             << "\t" << 120 * qty[10] << endl;
    if (qty[11] != 0)
        cout << "\t\t6.Italian Tossed Salad"
             << "\t" << qty[11] << "\t"
             << "140"
             << "\t" << 140 * qty[11] << endl;
    if (qty[12] != 0)
        cout << "\t\t7.American Corn Salad"
             << "\t" << qty[12] << "\t"
             << "145"
             << "\t" << 145 * qty[12] << endl;
    if (qty[13] != 0)
        cout << "\t\t1.Peshawari Paneer Tikka"
             << "\t" << qty[13] << "\t"
             << "240"
             << "\t" << 240 * qty[13] << endl;
    if (qty[14] != 0)
        cout << "\t\t2.Tandoori Paneer Tikka"
             << "\t" << qty[14] << "\t"
             << "240"
             << "\t" << 240 * qty[14] << endl;
    if (qty[15] != 0)
        cout << "\t\t3.Hariyali Paneer Tikka"
             << "\t" << qty[15] << "\t"
             << "250"
             << "\t" << 250 * qty[15] << endl;
    if (qty[16] != 0)
        cout << "\t\t4.Hariyali Paneer Tikka"
             << "\t" << qty[16] << "\t"
             << "250"
             << "\t" << 250 * qty[16] << endl;
    if (qty[17] != 0)
        cout << "\t\t5.Raja Kebab"
             << "\t\t" << qty[17] << "\t"
             << "250"
             << "\t" << 250 * qty[17] << endl;
    if (qty[18] != 0)
        cout << "\t\t6.Paneer Seekh Kebab"
             << "\t" << qty[18] << "\t"
             << "250"
             << "\t" << 250 * qty[18] << endl;
    if (qty[19] != 0)
        cout << "\t\t6.Special Milestone Plater"
             << "\t" << qty[19] << "\t"
             << "370"
             << "\t" << 370 * qty[19] << endl;
    if (qty[20] != 0)
        cout << "\t\t1.Apple"
             << "\t\t\t" << qty[20] << "\t"
             << "100"
             << "\t" << 100 * qty[20] << endl;
    if (qty[21] != 0)
        cout << "\t\t2.Pineapple"
             << "\t\t\t" << qty[21] << "\t"
             << "110"
             << "\t" << 110 * qty[21] << endl;
    if (qty[22] != 0)
        cout << "\t\t3.Sweet Lime"
             << "\t\t\t" << qty[22] << "\t"
             << "110"
             << "\t" << 110 * qty[22] << endl;
    if (qty[23] != 0)
        cout << "\t\t4.Fresh Lime"
             << "\t\t\t" << qty[23] << "\t"
             << "130"
             << "\t" << 130 * qty[23] << endl;
    if (qty[24] != 0)
        cout << "\t\t1.Paneer Angara"
             << "\t\t" << qty[24] << "\t"
             << "250"
             << "\t" << 250 * qty[24] << endl;
    if (qty[25] != 0)
        cout << "\t\t2.Paneer Pasanda"
             << "\t\t" << qty[25] << "\t"
             << "240"
             << "\t" << 240 * qty[25] << endl;
    if (qty[26] != 0)
        cout << "\t\t3.Paneer Lababdar"
             << "\t\t" << qty[26] << "\t"
             << "250"
             << "\t" << 250 * qty[26] << endl;
    if (qty[27] != 0)
        cout << "\t\t4.Paneer Tawa Masala"
             << "\t" << qty[27] << "\t"
             << "250"
             << "\t" << 250 * qty[27] << endl;
    if (qty[28] != 0)
        cout << "\t\t5.Paneer Toofani"
             << "\t\t" << qty[28] << "\t"
             << "250"
             << "\t" << 250 * qty[28] << endl;
    if (qty[29] != 0)
        cout << "\t\t6.Paneer Handi"
             << "\t\t" << qty[29] << "\t"
             << "270"
             << "\t" << 270 * qty[29] << endl;
    if (qty[30] != 0)
        cout << "\t\t7.Paneer Kadai"
             << "\t\t" << qty[30] << "\t"
             << "270"
             << "\t" << 270 * qty[30] << endl;
    if (qty[31] != 0)
        cout << "\t\t8.Paneer Tikka Masala"
             << "\t" << qty[31] << "\t"
             << "270"
             << "\t" << 270 * qty[31] << endl;
    if (qty[32] != 0)
        cout << "\t\t9.Paneer Butter Masala"
             << "\t" << qty[32] << "\t"
             << "270"
             << "\t" << 270 * qty[32] << endl;
    if (qty[33] != 0)
        cout << "\t\t10.Paneer Palak"
             << "\t\t" << qty[33] << "\t"
             << "270"
             << "\t" << 270 * qty[33] << endl;
    if (qty[34] != 0)
        cout << "\t\t1.Cheese Nan"
             << "\t\t" << qty[34] << "\t"
             << "95"
             << "\t" << 95 * qty[34] << endl;
    if (qty[35] != 0)
        cout << "\t\t2.Hariyali Nan"
             << "\t\t" << qty[35] << "\t"
             << "85"
             << "\t" << 85 * qty[35] << endl;
    if (qty[36] != 0)
        cout << "\t\t3.Kashmiri Nan"
             << "\t\t" << qty[36] << "\t"
             << "98"
             << "\t" << 95 * qty[36] << endl;
    if (qty[37] != 0)
        cout << "\t\t4.Plain Nan"
             << "\t\t" << qty[37] << "\t"
             << "55"
             << "\t" << 55 * qty[37] << endl;
    if (qty[38] != 0)
        cout << "\t\t5.Butter Nan"
             << "\t\t" << qty[38] << "\t"
             << "60"
             << "\t" << 60 * qty[38] << endl;
    if (qty[39] != 0)
        cout << "\t\t6.Stuffed Masala Nan"
             << "\t" << qty[39] << "\t"
             << "75"
             << "\t" << 75 * qty[39] << endl;
    if (qty[40] != 0)
        cout << "\t\t7.Onion Kulcha"
             << "\t\t" << qty[40] << "\t"
             << "65"
             << "\t" << 65 * qty[40] << endl;
    if (qty[41] != 0)
        cout << "\t\t8.Masala Kulcha"
             << "\t\t" << qty[41] << "\t"
             << "55"
             << "\t" << 55 * qty[41] << endl;
    if (qty[42] != 0)
        cout << "\t\t1.Sunday Special Ice-cream"
             << "\t" << qty[42] << "\t"
             << "170"
             << "\t" << 170 * qty[42] << endl;
    if (qty[43] != 0)
        cout << "\t\t2.Almond Carnival Ice-cream"
             << "\t" << qty[43] << "\t"
             << "55"
             << "\t" << 55 * qty[43] << endl;
    if (qty[44] != 0)
        cout << "\t\t3.Kesar Pista Ice-cream"
             << "\t" << qty[44] << "\t"
             << "55"
             << "\t" << 55 * qty[44] << endl;
    if (qty[45] != 0)
        cout << "\t\t4.Kaju Draksh Ice-cream"
             << "\t" << qty[45] << "\t"
             << "45"
             << "\t" << 45 * qty[45] << endl;
    if (qty[46] != 0)
        cout << "\t\t5.Butter Scotch Ice-cream"
             << "\t" << qty[46] << "\t"
             << "45"
             << "\t" << 45 * qty[46] << endl;
    if (qty[47] != 0)
        cout << "\t\t6.Strawberry Ice-cream"
             << "\t" << qty[47] << "\t"
             << "50"
             << "\t" << 50 * qty[47] << endl;
}
    
};

int main(){
    
    exitanuj add;
    

    do
    {
        cout<<"Choose Your Choice"<<endl;
        cout<<"1) SOUP"<<endl;
        cout<<"2) SALAD"<<endl;
        cout<<"3) STARTERS"<<endl;
        cout<<"4) SODA"<<endl;
        cout<<"5) MAIN COURSE"<<endl;
        cout<<"6) DESSERTS"<<endl;
        cout<<"7) EXIT"<<endl;
        cout<<"\n\n";

        cout<<"Enter Your choice: ";
        cin>>choice;
        cout<<"\n\n";
        switch(choice)
    {
    case 1 :
        add.soupdata();
        
        break;
    case 2 :
        add.SALADdata();
        break;
    case 3 :
        add.STARTERSdata();
        break;
    case 4 :
        add.SODAdata();
        break;
    case 5 :
        add.MAINCOURSE();
        add.rotietanduri();
        break;
    case 6 :
         add.DESSERTSdata();
        break;
    case 7 :
        add.aa();
        calc(total);
        break;
    }
    
    } while (choice!=0);

   
}