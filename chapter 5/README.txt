1. Viết một chương trình tính toán xem có bao nhiêu chữ số trong một số:
Enter a number: 374
The number 374 has 3 digits
Bạn có thể giả định rằng số không có hơn 4 chữa số. Gợi ý: Sử dụng câu lệnh if để kiểm tra số. Ví dụ, nếu số đó ở giữa 0 và 9, nó có 1 chữ số. Nếu số đó ở giữa 10 và 99, nó có 2 chữ số.
Ⓦ2. Viết một chương trình yêu cầu người dùng nhập thời gian ở dạng 24 giờ, và sau đó hiển thị thời gian ở dạng 12 giờ:
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
Cẩn thận không hiển thị 12:00 là 0:00.
3. Sửa đổi chương trình broker.c của phần 5.2 bằng cách làm cả 2 thay đổi sau:
(a) Yêu cầu người dùng nhập số lượng cổ phiếu và giá mỗi cổ phiếu, thay vì giá trị của giao dịch.
(b) Thêm các câu lệnh tính toán hoa hồng được tính phí bởi nhà môi giới đối thủ ($33 cộng thêm 3¢ cho mỗi cổ phiếu khi ít hơn 2000 cổ phiếu;$33 cộng thêm 2¢ cho mỗi cổ phiếu cho 2000 cổ phiếu hoặc hơn). Hiển thị hoa hồng của đối thủ cũng như hoa hồm do người môi giới ban đầu
Ⓦ4.Đây là một phiên bản đơn giản của tỉ lệ Beaufort, được sử dụng để ước lượng sức gió:
Tốc độ(kn)

Mô tả

Nhỏ hơn 1

Gió rất nhẹ

1-3

Gió nhẹ

4-27

Gió mạnh

28-47

Lốc

48-63

Bão

Trên 63

Cuồng phong


Viết một chương trình yêu cầu người dùng nhập tốc độ gió (kn), tiếp theo hiển thị sự mô tả tương ứng
5. Ở một tiểu bang, những cư dân độc thân phải chịu thuế thu nhập sau:
Thu nhập

Số thuế

Không hơn $750

1% thu nhập

$750-$2,250

$7.50 thêm 2% với số tiền trên $750

$2,250-$3,750

$37.50 thêm 3% với số tiền trên$2,250

$3,750-$5,250

 

$5,250-$7,000

$142.50 thêm 5% với số tiền trên $5,250

Trên $7,000

$230.00 thêm 6% với số tiền trên $7,000

Viết một chương trình yêu cầu người dùng nhập vào khoản thu chịu thuế, sau đó hiển thị khoản thuế phải nộp
Ⓦ6. Sửa đổi chương trình upc.c của phần 4.1 để nó kiểm tra xem một UPC có hợp lệ không. Sau khi người dùng nhập một UPC, chương trình sẽ hiển thị VALID hoặc NOT VALID
7. Viết một chương trình tìm số lớn nhất và nhỏ nhất của 4 số nguyên được nhập bởi người dùng:
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
Sử dụng một vài câu lệnh if càng tốt. Gợi ý: 4 câu lệnh if là đủ.
8. Bảng sau cho thấy chuyến bay hằng ngày từ một thành phố đến thành phố khác:
Giờ khởi hành

Giờ đến nơi

8:00 a.m.

10:16 a.m.

9:43 a.m.

11:52 a.m.

11:19 a.m.

1:31 p.m.

12:47 p.m.

3:00 p.m.
Giờ đến nơi

2:00 p.m.

4:08 p.m.

3:45 p.m.

5:55 p.m.

7:00 p.m.

9:20 p.m.

9:45 p.m.

11:58 p.m.


Viết một chương trình yêu cầu người dùng nhập thời gian(được biểu thị bằng giờ và phút, sử dụng đồng hồ 24 giờ). Sau đó chương trình hiển thị thời gian khởi hành và thời gian đến nơi của chuyến bay có thời gian khởi hành gần nhất đối với thời gian mà người dùng đã nhập:
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m, arriving at 3:00 p.m.
Gợi ý: chuyển đổi đầu vào thành thời gian được biểu thị bằng phút kể từ đêm và so sánh nó với thời gian khởi hành, cũng được biểu thị bằng phút từ lúc nửa đêm. Ví dụ, 13:15 là 13 x 60 + 15 = 795 phút từ nửa đêm, gần với 12:47 p.m. (767 phút từ nửa đêm) hơn bất kì thời gian khởi hành nào khác.
9.  Viết một chương trình nhắc người dùng nhập vào 2 ngày và sau đó cho biết ngày nào đến sớm hơn trên lịch:
Enter first date (mm/dd/yy) : 3/6/08
Enter second date (mm/dd/yy) :  5/17/07
5/17/07 is earlier than 3/6/08
Ⓦ10. Sử dụng câu lệnh swich, viết một chương trình chuyển đổi từ cấp chữ số thành cấp chữ cái:
Enter numerical grade: 84
Letter grade: B
Sử dụng thang điểm sau: A = 90-100, B = 80-89,C = 70-79, D = 60-69, F = 0-59.
In một cảnh báo lỗi nếu điểm lớn hơn 100 hoặc nhỏ hơn 0. Gợi ý, chia điểm ra thành 2 chữ số, sau đó sử dụng câu lệnh if để kiểm tra chữ số hàng chục
11. Viết một chương trình yêu cầu người dùng nhập vào số có 2 chữa số, sau đó in ra từ tiếng anh cho con số :
Enter a two-digit number : 45
You entered the number forty-five.
Gợi ý : Chia số thành 2 chữ số. Sử dụng một câu lệnh if để in từ cho chữ số đầu tiên ("twenty", "thirty", v.v). Sử dụng câu lệnh switch thứ 2 để in từ cho chữ số thứ 2. Đừng quên rằng các số từ 11 đến 19 cần được xử lý đặc biệt. 
