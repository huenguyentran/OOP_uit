Cửa hàng mỹ phẩm muốn quản lý các đơn hàng đã bán cần xây dựng 1 phần mềm để hỗ trợ. Một đơn hàng sẽ cần quản lý các thông tin: mã đơn hàng, thông tin khách hàng, ngày lập hóa đơn, giá đơn hàng (bằng giá trong thông tin gói sản phẩm), thông tin 1 gói sản phẩm.


Thông tin 1 khách hàng sẽ gồm mã khách hàng, tên, địa chỉ, số điện thoại
Cửa hàng có 2 loại gói sản phẩm: gói Romantic, gói Fresh-Air. Mỗi gói sản phẩm sẽ cần quản lý thông tin mã gói, loại gói sản phẩm, thông tin 1 nước hoa, 1 sữa tắm, 1 dầu gội đầu, giá của gói sản phẩm (tổng giá của nước hoa + sữa tắm + dầu gội). 

Biết rằng nước hoa có 2 loại nước hoa hoa hồng và nước hoa hoa cúc. Mỗi loại nước hoa sẽ có thông tin về mã số, loại nước hoa (hoa hồng, hoa cúc), dung tích (đơn vị ml), đơn giá. Cách tính giá của các loại nước hoa như sau: Giá nước hoa hồng = dung tích * 20, Giá nước hóa cúc = dung tích * 15.

Dầu gội đầu sẽ có 2 loại: dầu gội đầu cho tóc khô, dầu gội đầu cho tóc dầu. Mỗi chai dầu gội sẽ có các thông tin: Mã số, Loại dầu gội (cho tóc khô, cho tóc dầu), Dung tích (đơn vị ml), Đơn giá. 

Riêng dầu gội cho tóc dầu sẽ có thêm thông tin tiểu chuẩn kiểm định để xác nhận về sản phẩm đạt tiêu chuẩn kiểm định loại 1 hay tiêu chuẩn kiểm định loại 2. Đơn giá cho các loại dầu gội:
- Dầu gội tóc khô: cứ  dung tích 1 ml thì có giá là 20.
- Dầu gội tóc dầu: 
	o Đạt tiêu chuẩn 1: cứ  dung tích 1 ml thì có giá là 30.
	o Đạt tiêu chuẩn 2: cứ  dung tích 1 ml thì có giá là 40
Sữa tắm cũng có 2 loại: cho da nhờn, cho da khô. Mỗi chai sữa tắm sẽ có thông tin: Mã số, Loại sữa tắm (cho da khô, cho da nhơn), Dung tích (đơn vị), Đơn giá.
- Sữa tắm cho da khô: cứ  dung tích 1 ml thì có giá là 20.
- Sữa tắm cho da nhờn: cứ  dung tích 1 ml thì có giá là 40.
Hiện tại, cửa hàng bán 2 loại gói sản phẩm sau: gói Romantic, gói Fresh-Air:
- Gói Romantic, gói này luôn sử dụng nước hoa hoa hồng, còn dầu gội đầu và sữa tắm là tùy chọn.
- Nhóm Fresh-Air, gói này luôn sử dụng dầu gội tóc khô, còn nước hoa và sữa tắm là tùy chọn.

Viết chương trình hỗ trợ với một số thao tác cơ bản sau:
(Các yếu tố đánh giá: chương trình chạy, áp dụng tốt tư tưởng lập trình hướng đối tượng, có tính mở rộng tương lại và sử dụng được kỹ thuật kế thừa, đa hình, nạp chồng toán tử...)
● Nhập danh sách N đơn hàng
● Hiển thị lại danh sách N đơn hàng trước khi người dùng tiến hành lưu thông qua toán tử xuất<<
● Lưu danh sách đơn hàng xuống file danh_sach_don_hang.txt

Minh họa giao diện nhập:
Nhập số lượng đơn hàng: 1
Nhập thông tin đơn hàng 1: 
Mã đơn hàng: DH001 
Ngày lập đơn hàng: 30/5/2018 
Thông tin khách hàng:
  Mã khách hàng: KH001
  Tên khách hàng: nguyen van a
  Địa chỉ: HCM
  Số điện thoại: 0123456789
Nhập thống số gói sản phẩm 
Nhóm gói sản phẩm (1- Romantic, 2- Fresh-Air): 1 
Nhập mã số: Set1 
Nhập tên gói sản phẩm: Gói lãng mãn 
Nước hoa:
	Mã số: nuochoa1
Chọn dầu gội (1 – cho tóc khô, 2 – cho tóc dầu): 2  
Mã số của dầu gội: daugoi2  
Đạt tiêu chuẩn (1 – tiêu chuẩn 1, 2 – tiêu chuẩn 2): 2  
Nhập dung tích: 300 
Chọn sữa tắm (1 – cho da khô, 2 – cho da nhờn) :
Mã số của sữa tắm: suatam1  
Nhập tên sữa tắm: sữa tắm không mùi (da khô)  
Nhập dung tích: 600

Minh họa về format thông tin hiển thị và lưu file:
Đơn hàng: <Mã đơn hàng> <Ngày lập đơn hàng> < Giá trị đơn hàng>
	 Thông tin khách hàng: <Mã khách hàng><Tên> <Địa chỉ> <Số điện thoại>

Gói sản phẩm: <Mã số gói sản phẩm> <Loại gói sản phẩm> <Tên gói sản phẩm>  <Tổng giá trị của gói - tính tổng từ nước hoa + dầu gội + sữa tắm> 

Nước hoa: <Mã số nước hoa> <loại nước hoa (hoa hồng, hoa cúc)> <tiêu chuẩn (nếu là hoa hồng)> <dung tích> <đơn giá> 

Dầu gội: <Mã số dầu gội > <loại dầu gội (da khô, da dầu)> <tiêu chuẩn kiểm định – nếu là dầu gội cho tóc dầu > <dung tích> <đơn giá> 

Sữa tắm: <Mã số sữa tắm>  <loại sữa tắm (da khô, da nhờn)> <dung tích> <đơn giá>
