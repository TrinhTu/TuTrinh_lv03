Lê Tú Trinh

**Báo cáo học loop**

[1. Vòng lặp for](#1)

[2. Vòng lặp While](#2)

[3. Vòng lặp Do...While](#3)

<a name="1"></a>
####1. Vòng lặp for:

Cú pháp :` for ( khởi tạo; điều kiện ; biểu thức) việc_thực hiện;`

Trong đó:

- Khởi tạo: là toán tử gán để tạo giá trị ban đầu cho biến điều khiển.

- Điều kiện: biểu thức điều kiện để thực hiện vòng lặp.

- Biểu thức: phép gán dùng để thay đổi giá trị của biến điều khiển.

Sơ đồ vòng lặp for:

![anh](http://icviet.vn/upload/images/lap%20trinh%20c%20co%20ban/Bai%206/1.PNG)

Các thức hoạt động:

- Bước 1:  gán giá trị đầu cho biến điều khiển

- Bước 2: xác định giá trị biểu thức điều kiện(kiểm tra điều kiện đúng hay sai tức 1 hoặc 0). Tùy vào giá trị của biểu thức 2 mà thực hiện theo 2 hướng:
<ul>
<li>Nếu sai (0) sẽ thoát khỏi vòng lặp</li>
<li>Nếu đúng (1) sẽ thực hiện khối lệnh trong vòng lặp for đến khi gặp dấu ngoặc ở cuối vòng lặp for } hoặc lệnh continue thì tới bước 3</li>


- Bước 3:  Tính giá trị của biểu thức 3 sau đó quay lại bước 2.

Ví dụ: sử dụng vòng lặp for in ra màn hình số nguyên từ 1 đến 10

![anh](http://i.imgur.com/TUNO9C2.png)

**Chú ý**

- Biểu thức 1 (khởi tạo ) chỉ được thực hiện duy nhất 1 lần khi bắt đầu vòng lặp.

- Phần điều kiện, biểu thức và việc thực hiện có thể được tính toán và lặp lại nhiều lần.

- Các giá trị ` khởi tạo, điều kiện,biểu thức ` đều có thể vắng mặt nhưng vẫn phải có dấu **;** . 

- Trường hợp đặc biệt`<bt2>` không có thì luôn được xem là nhận giá trị true, muốn thoát khỏi vòng lặp phải dùng lệnh break, goto hoặc return

- Có thể dùng cấu trúc các vòng lặp for lồng nhau. 

- Khi gặp lệnh break thì chương trình sẽ thoát khỏi vòng for sâu nhất còn chứa lệnh break

- Trong vòng for có thể sử dụng lệnh continue để chuyển tới chu trình mới của vòng lặp

<a name="2"></a>
####2. Vòng lặp While:

Cú pháp: ` While ( biểu thức) lệnh hoặc khối lệnh; ` 

Trong đó:  

- Biểu thức là biểu thức C bất kì thường là biểu thức quan hệ cho kết quả đúng hoặc sai.

- Câu lệnh thường là câu lệnh đơn hoặc câu lệnh phức nằm giữa dấu {}

Sơ đồ câu lệnh While:

![anh](http://i.imgur.com/IuPm9za.png)

Cách thức hoạt động của biểu thức: 

- Xác định giá trị của biểu thức nếu giá trị của biểu thức đúng thì chuyển sang bước 2, nếu sai thì thoát khỏi vòng lặp.

- Thực hiện lệnh hoặc khối lệnh sau đó quay về bước 1, lệnh có thể được thực hiện nhiều lần hoặc không được thực hiện lần nào nếu biểu thức sai ngay từ ban đầu..

**Trong câu lệnh While có thể dùng câu lệnh break để thoát khỏi vòng lặp theo ý muốn**

Ví dụ tìm UCLN của 2 số a,b:


```
void main()
     {
         int r, a, b;
         printf(“nhap hai so:”);
         scanf(“%d %d”, &a, &b);
         r = a % b;
         while(r =! 0)
              {
                  a = b;
	    b = r;
	    r = a % b;
               }
           printf(“USCLN la: %d”, b);
      }
```

<a name="3"></a>
####3. Vòng lặp do...while

Cú pháp: ` do (khối lệnh hoặc công việc) while (biểu thức); `

Trong đó: 

- Lệnh và khối lệnh được thực hiện ngay khi bắt đầu vòng lặp.

- Biều thức được kiểm tra ngay sau khi thực hiện lệnh và khối lệnh. Nếu biểu thức có giá trị đúng thì tiếp tục thực hiện lệnh (khối lệnh), nếu sai thì kết thúc vòng lặp.

- Lệnh và khối lệnh được thực hiện ít nhất 1 lần trong câu.

- Cấu trúc do … while thường được sử dụng để kiểm tra các giá trị đầu vào (thường là các giá trị được nhập từ bàn phím).

Ví dụ: kiểm tra dữ liệu nhập vào có phải là 1 tháng trong năm hay không

![anh](http://i.imgur.com/MvAQVoI.png)
