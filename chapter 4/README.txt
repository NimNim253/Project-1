1. Viết một chương trình mà yêu cầu người dùng nhập vào số có 2 chữ số, sau đó in số với các chữ số đảo ngược của nó. Một phiên của chương trình nên xuất hiện như sau:
Enter a two-digit number: 28
The reversal is: 82
Đọc số sử dụng %d, sau đó tách nó thành 2 chữ số. Gợi ý: Nếu n là một số nguyên, sau đó n % 10 là chữ số cuối của n và n / 10 là n với chữ số cuối đã bị lược bỏ.
Ⓦ 2. Mở rộng chương trình trong dự án lập trình 1 thành xử lý các số có 3 chữ số
3. Viết lại chương trình trong dự án lập trình 2 để nó in ra số đảo ngược của số có 3 chữ số mà không sử dụng thuật toán tác số thành các chữ số. Gợi ý: xem chương trình upc.c của phần 4.1.
4. Viết một chương trình đọc một số nguyên được nhập bởi người dùng và hiển thị nó ở dạng bát phân (cơ số 8):
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
Đầu ra nên được hiển thị 5 chữ số, kể cả khi đủ cho các chữ số ít hơn. Gợi ý: Để chuyển số sang dạng bát phân, đầu tiên chia nó cho 8, phền dư là chữ số cuối cùng của số bát phân (trong trường hợp này là 1). Tiếp theo chia số nguyên cho 8 và lặp lại quá trình đến chữ số cuối cùng. (printf có khả năng hiển thị các số ở cơ số 8, như chúng ta sẽ thấy trong chương 7, bởi vậy có cách dễ hơn để viết chương trình này. ) 
5. Viết lại chương trình upc.c ở phần 4.1 để người dùng nhập 11 chữ số 1 lần, thay vì nhập 1 chữ số, sau đó 5 chữ số, và sau đó là 5 chữ số khác.
Enter the first 11 digits of a UPC:  01380015173
Check digit: 5
6. Các nước Châu Âu sử dụng mã 13 chữa số, như là Mã bài viết Châu Âu (EAN) thay vì dùng Mã sản phẩm 12 chữ số (UPC) được tìm thấy ở Bắc Mỹ. Mỗi EAN kết thúc với một chữ số kiểm tra, như là UPC. Kỹ thuật để tính chữ số kiểm tra cũng tương tự
    Thêm các chữ số thứ nhất, thứ ba, thứ năm, thứ bảy, thứ chín, và mười một
    Thêm các chữ số thứ hai, thứ tư, thứ sáu, thứ tám và thứ mười.
    Nhân tổng đầu tiên với 3 và thêm nó vào tổng thứ hai.
    Trừ 1 cho tất cả.
    Tính toán phần còn lại khi tổng đã điều chỉnh chia cho 10.
    Lấy 9 trừ cho phần còn lại .
Ví dụ, hãy xem xét Güllüoglu Turkish Delight Pistachio & Coconut, có một EAN của 8691484260008. Tổng đầu tiên là 6 + 1 + 8 + 2 + 0 + 0 =12, và tổng thứ 2 là 8 + 9 + 4 + 4 + 6 + 0 = 31. Nhân tổng đầu tiên với 3 và công tổng thứ 2 ra 82. Trừ đi 1 còn 81. Phần dư khi chia cho 10 là 1. Khi 9 trừ đi phần dư, kết quả là 8, khớp với chữ số cuối của mã ban đầu. Nhiệm vụ của bạn là điều chỉnh chương trình upc.c của phần 4.1 đẻ nó tính chữ số kiểm tra cho một EAN. Người dùng sẽ nhập 12 chữ số đầu của EAN như một số:
Enter the first 12 digits of a UPC: 869148426000
Check digit: 8
