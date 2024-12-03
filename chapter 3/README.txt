1. Viết một chương trình chấp nhận một ngày tháng năm từ người dùng ở dạng mm/dd/yyyy và sau đó hiển thị nó ở dạng yyyymmdd:
Enter a date (mm/dd/yyyy) : 2/17/2011
You entered the date 20110217   
2. Viết một chương trình định dạng thông tin sản phẩm do người dùng nhập vào. Một phiên với chương trình sẽ trông như này:
Enter item number: 583
printf("Enter unit price: 13.5
printf("Enter purchase date (mm/dd/yyyy) : 10/24/2010
Item        Unit        Purchase
            Price       Date
583         $13.50      10/24/2010
Số mục và ngày nên được căn trái; đơn giá nên được căn lề phải. Cho phép số lượng dollar lên tới $9999.99. Gợi ý: Sử dụng các tab để tạo các cột.
3. Các cuốn sách được xác thực bởi một số sách tiêu chuẩn quốc tế (ISBN). Các ISBN được chỉ định chứa 13 chữ số vào sau ngày 1 tháng 1, năm 2007, được sắp xếp vào 5 nhóm, như là 978-0-393-97950-3.
(Các ISBN cũ hơn sử dụng 10 chữ số.) Nhóm đầu tiên (tiền tố GS1) Hiện có trên 978 hoặc 979. Nhóm tiếp theo xác định ngôn ngữ hoặc quốc gia phát hành(ví dụ, 0 và 1 được sử dụng trong những quốc gia nói tiếng anh). Mã nhà xuất bản xác định nhà xuất bản(393 là mã cho W.W.Norton). Số mục được chỉ thị bởi nhà xuất bản để xác định một cuốn sách cụ thể (97950 là mã cho quyển sách này). Một ISBN kết thúc với một số kiểm tra được sử dụng để xác minh tính chính xác của các chữ số trước đó. Viết một chương trình chỉa nhỏ ISBN do người dùng nhập
Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978 
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3
Chú ý: Số lượng chữ số trong mỗi nhóm có thể khác nhau; bạn không thể giả định rằng các nhóm đấy có độ dài như đã hiển thị trong ví dụ. Thử nghiệm chương trình của bạn với giá trị ISBN thật (thường tìm thấy ở mặt sau của một quyển sách và ở trang bản quyền).
4. Viết một chương trình nhắc người dùng nhập số điện thoại ở dạng (xxx) xxx-xxxx và sau đó hiển thị số theo dạng xxx.xxx.xxxx:
Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
You entered 404.817.6900
5. Viết một chương trình mà yêu cầu người dùng nhập số từ 1 đến 16 (theo bất kì tứ tự nào) và sau đó hiển thị các số theo sắp xếp 4x4, sau đó tính tổng của các cột, các hàng và các đường chéo:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16    3    2    13
 5   10   11     8
 9    6     7    12
4    15    14   1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
Nếu tổng của hàng, cột, đường chéo đều bằng nhau (như trong ví dụ này), các số được nói ở dạng magic square. magic square hiển thị ở đây xuất hiện trong một bản khắc họa 1514 bởi họa sĩ và nhà toán học Albrecht Durer(Lưu ý rằng các số ở giữa trong hàng cuối cùng cho biết ngày khắc.)
6. Sửa đổi chương trình addfrac.c ở phần 3.2 để người dùng nhập cả 2 phân số cùng một lúc, phân cách bởi một dấu cộng:
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
