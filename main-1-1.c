#include <stdio.h>

// status pinjaman 1 = bisa dipinjam
// status pinjaman 2 = telah dipinjam
struct Buku
{
    char *judul;
    char *penerbit;
    char *pengarang;
    char *jumlah_halaman;
    char *status_pinjaman;
};

int jumlah_buku = 50;
struct Buku bukus[] = {
    {"Buku1", "Erlangga", "Megawati", "205", "2"},
    {"Buku2", "Erlangga", "Megawati", "215", "1"},
    {"Buku3", "Erlangga", "Megawati", "225", "1"},
    {"Buku4", "Erlangga", "Megawati", "235", "1"},
    {"Buku5", "Erlangga", "Megawati", "245", "1"},
    {"Buku6", "Erlangga", "Megawati", "255", "1"},
    {"Buku7", "Erlangga", "Megawati", "255", "1"},
    {"Buku8", "Erlangga", "Megawati", "255", "1"},
    {"Buku9", "Erlangga", "Megawati", "255", "1"},
    {"Buku10", "Erlangga", "Megawati", "255", "1"},
    {"Buku11", "Erlangga", "Megawati", "256", "1"},
    {"Buku12", "Erlangga", "Megawati", "257", "1"},
    {"Buku13", "Erlangga", "Megawati", "258", "1"},
    {"Buku14", "Erlangga", "Megawati", "259", "1"},
    {"Buku15", "Erlangga", "Megawati", "257", "1"},
    {"Buku16", "Erlangga", "Megawati", "877", "1"},
    {"Buku17", "Erlangga", "Megawati", "44", "1"},
    {"Buku18", "Erlangga", "Megawati", "90", "1"},
    {"Buku19", "Erlangga", "Megawati", "88", "1"},
    {"Buku20", "Erlangga", "Megawati", "91", "1"},
    {"Buku21", "Erlangga", "Megawati", "32", "1"},
    {"Buku22", "Erlangga", "Megawati", "89", "1"},
    {"Buku23", "Erlangga", "Megawati", "70", "1"},
    {"Buku24", "Erlangga", "Megawati", "446", "1"},
    {"Buku25", "Erlangga", "Megawati", "100", "1"},
    {"Buku26", "Erlangga", "Megawati", "99", "1"},
    {"Buku27", "Erlangga", "Megawati", "33", "1"},
    {"Buku28", "Erlangga", "Megawati", "276", "1"},
    {"Buku29", "Erlangga", "Megawati", "2567", "1"},
    {"Buku30", "Erlangga", "Megawati", "298", "1"},
    {"Buku31", "Erlangga", "Megawati", "265", "1"},
    {"Buku32", "Erlangga", "Megawati", "2767", "1"},
    {"Buku33", "Erlangga", "Megawati", "276", "1"},
    {"Buku34", "Erlangga", "Megawati", "2765", "1"},
    {"Buku35", "Erlangga", "Megawati", "25767", "1"},
    {"Buku36", "Erlangga", "Megawati", "25", "1"},
    {"Buku37", "Erlangga", "Megawati", "75", "1"},
    {"Buku38", "Erlangga", "Megawati", "2765", "1"},
    {"Buku39", "Erlangga", "Megawati", "255", "1"},
    {"Buku40", "Erlangga", "Megawati", "2776", "1"},
    {"Buku41", "Erlangga", "Megawati", "276", "1"},
    {"Buku42", "Erlangga", "Megawati", "265", "1"},
    {"Buku43", "Erlangga", "Megawati", "2576", "1"},
    {"Buku44", "Erlangga", "Megawati", "255", "1"},
    {"Buku45", "Erlangga", "Megawati", "275", "1"},
    {"Buku46", "Erlangga", "Megawati", "250", "1"},
    {"Buku47", "Erlangga", "Megawati", "2875", "1"},
    {"Buku48", "Erlangga", "Megawati", "289", "1"},
    {"Buku49", "Erlangga", "Megawati", "2775", "1"},
    {"Buku50", "Erlangga", "Megawati", "2590", "1"},

};

int main()
{
    pilihan_menus();
}

int pilihan_menus()
{
    // membuat variabel
    char pilihan[2];

    printf("\nList Menu Yang Tersedia\n");
    printf("1. Menampilakan semua list buku\n");
    printf("2. Menambahkan Buku\n");
    printf("3. Mancari Buku berdasarkan Judul\n");
    printf("4. Meminjam Buku\n");
    printf("5. Lihat Buku yang sedang dipinjam\n");
    printf("6. Mengembalikan Buku Buku\n");
    printf("7. Keluar dari program\n");
    printf("Pilihan Menu : ");
    scanf("%s", &pilihan);

    int pilihan_menu = atoi(pilihan);
    switch (pilihan_menu)
    {
    case 1:
        ambil_semua_buku();
    case 2:
        tambah_buku();
    case 3:
        cari_buku();
    case 4:
        pinjam_buku();
    case 5:
        ambil_semua_buku_dipinjam();
    case 6:
        kembalikan_buku();
    case 7:
        exit(0);
    default:
        printf("Pilihan Menu Tidak Tersedia");
        return 0;
    }
}

int ambil_semua_buku()
{
    int no = 1;
    for (int i = 0; i < jumlah_buku; i++)
    {
        printf("%d. Judul : %s\n", no, bukus[i].judul);
        printf("   Pengarang : %s\n", bukus[i].pengarang);
        printf("   Jumlah Halaman : %s\n", bukus[i].jumlah_halaman);
        printf("   Pengarang : %s\n", bukus[i].penerbit);
        if (bukus[i].status_pinjaman == "1")
        {
            printf("   Status Peminjaman : Sedang Tidak Ada yang Pinjam");
        }
        else
        {
            printf("   Status Peminjaman : Sedang Dipinjam");
        }

        printf("\n");
        no++;
    }
    pilihan_menus();
}

int tambah_buku()
{
    struct Buku buku;

    char judul[50], penerbit[50], pengarang[50], jumlah_halaman[50];

    printf("Lengkapi data-data buku dibawah ini:\n");
    printf("Judul: ");
    scanf("%s", &judul);

    printf("penerbit: ");
    scanf("%s", &penerbit);

    printf("pengarang: ");
    scanf("%s", &pengarang);

    printf("jumlah_halaman: ");
    scanf("%s\n", &jumlah_halaman);

    buku.judul = judul;
    buku.pengarang = judul;
    buku.jumlah_halaman = judul;
    buku.penerbit = judul;
    buku.status_pinjaman = "1";

    bukus[jumlah_buku] = buku;
    jumlah_buku++;
    printf("\n Buku Berhasil Ditambahkan \n");
    pilihan_menus();
}

int cari_buku()
{
    char judul_cari[50];

    printf("\n Menu Cari Buku\n");

    printf("Judul Buku : ");
    scanf("%s", &judul_cari);

    int ditemukan = 0;
    for (int i = 0; i < jumlah_buku; i++)
    {
        if (strcmp(bukus[i].judul, judul_cari) == 0)
        {
            printf("Judul : %s\n", bukus[i].judul);
            printf("Pengarang : %s\n", bukus[i].pengarang);
            printf("Jumlah Halaman : %s\n", bukus[i].jumlah_halaman);
            printf("Pengarang : %s\n", bukus[i].penerbit);
            printf("\n");
            ditemukan = 1;
        }
    }
    if (ditemukan == 0)
    {
        printf("Tidak Ditemukan Buku Dengan Judul %s\n", judul_cari);
    }
    pilihan_menus();
}

int pinjam_buku()
{
    char judul_cari[50];

    printf("\n Menu Pinjam Buku\n");

    printf("Masukkan nama buku yang ingin dipinjam : ");
    scanf("%s", &judul_cari);

    int ditemukan = 0;
    int index_buku;
    for (int i = 0; i < jumlah_buku; i++)
    {
        if (strcmp(bukus[i].judul, judul_cari) == 0)
        {
            if (bukus[i].status_pinjaman == "1")
            {
                printf("Judul : %s\n", bukus[i].judul);
                printf("Pengarang : %s\n", bukus[i].pengarang);
                printf("Jumlah Halaman : %s\n", bukus[i].jumlah_halaman);
                printf("Pengarang : %s\n", bukus[i].penerbit);
                printf("\n");
                index_buku = i;
                ditemukan = 1;
            }
        }
    }
    if (ditemukan == 0)
    {
        printf("Tidak Ditemukan Buku Dengan Judul %s\n", judul_cari);
        pilihan_menus();
    }
    if (ditemukan == 1)
    {
        char status_pinjam[50];

        printf("\n Apakah anda ingin meminjam buku tersebut\n");

        printf("1. iya\n");
        printf("2. tidak\n");
        printf("Pilih : ");
        scanf("%s", &status_pinjam);
        int pilihan_status = atoi(status_pinjam);
        switch (pilihan_status)
        {
        case 1:
            bukus[index_buku].status_pinjaman = "2";
            printf("Buku Berhasil dipinjam, jgn lupa dikembalikan\n");
        case 2:
            pilihan_menus();
        default:
            pilihan_menus();
        }
    }
}

int ambil_semua_buku_dipinjam()
{
    int no = 1;
    int status_buku = 0;
    for (int i = 0; i < jumlah_buku; i++)
    {
        if (bukus[i].status_pinjaman == "2")
        {
            printf("%d. Judul : %s\n", no, bukus[i].judul);
            printf("   Pengarang : %s\n", bukus[i].pengarang);
            printf("   Jumlah Halaman : %s\n", bukus[i].jumlah_halaman);
            printf("   Pengarang : %s\n", bukus[i].penerbit);
            status_buku = 1;
            printf("\n");
        }
        no++;
    }
    if (status_buku == 0)
    {
        printf("Tidak ada buku yang sedang dipinjam\n");
    }
    pilihan_menus();
}

int kembalikan_buku()
{
    char judul_cari[50];

    printf("\n Menu kembalikan Buku\n");

    printf("Masukkan nama buku yang dipinjam : ");
    scanf("%s", &judul_cari);

    int ditemukan = 0;
    int index_buku;
    for (int i = 0; i < jumlah_buku; i++)
    {
        if (strcmp(bukus[i].judul, judul_cari) == 0)
        {
            if (bukus[i].status_pinjaman == "2")
            {
                printf("Judul : %s\n", bukus[i].judul);
                printf("Pengarang : %s\n", bukus[i].pengarang);
                printf("Jumlah Halaman : %s\n", bukus[i].jumlah_halaman);
                printf("Pengarang : %s\n", bukus[i].penerbit);
                printf("\n");
                index_buku = i;
                ditemukan = 1;
            }
        }
    }
    if (ditemukan == 0)
    {
        printf("Tidak Ditemukan Buku Dengan Judul yang sedang dipinjam %s\n", judul_cari);
        pilihan_menus();
    }
    if (ditemukan == 1)
    {
        char status_pinjam[50];

        printf("\n Apakah anda ingin mengembalikan buku tersebut\n");

        printf("1. iya\n");
        printf("2. tidak\n");
        printf("Pilih : ");
        scanf("%s", &status_pinjam);
        int pilihan_status = atoi(status_pinjam);
        switch (pilihan_status)
        {
        case 1:
            bukus[index_buku].status_pinjaman = "1";
            printf("Buku Berhasil dikembalikan\n");
        case 2:
            pilihan_menus();
        default:
            pilihan_menus();
        }
    }
}
