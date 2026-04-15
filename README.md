# \# Arduino LM35 Temperature Monitor (IoT Ready)

# 

# \## 📝 Mô tả dự án

# Hệ thống giám sát nhiệt độ đa điểm sử dụng 3 cảm biến LM35. Dữ liệu được xuất ra cổng Serial dưới dạng JSON, sẵn sàng cho các ứng dụng IoT.

# 

# \## ✨ Tính năng nổi bật

# \* Đọc đồng thời 3 kênh cảm biến (A0, A1, A2).

# \* Chuyển đổi giá trị ADC sang độ C chính xác.

# \* \*\*Định dạng đầu ra:\*\* JSON (JavaScript Object Notation).

# 

# \## 🛠 Sơ đồ kết nối

# | Thành phần | Chân kết nối |

# | :--- | :--- |

# | LM35 Số 1 | Pin A0 |

# | LM35 Số 2 | Pin A1 |

# | LM35 Số 3 | Pin A2 |

# 

# \## 🚀 Hướng dẫn chạy dự án

# 1\. Kết nối phần cứng theo sơ đồ.

# 2\. Nạp file `.ino` trong thư mục `firmware`.

# 3\. Mở Serial Monitor ở tốc độ \*\*9600 baud\*\*.

# 

# \## 👥 Thành viên thực hiện

# \* \*\*Sinh viên A:\*\* Phụ trách phần cứng \& đọc dữ liệu.

# \* \*\*Sinh viên B:\*\* Phụ trách định dạng JSON \& Git manager.

