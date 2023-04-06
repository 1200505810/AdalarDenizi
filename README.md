# AdalarDenizi

Bu C programı, bir matrisi (harita) tarayarak, matristeki adaları (1'lerden oluşan, çevresi 0'larla çevrili bölgeleri) bulur ve her adayı 2'ye işaretler. Bu işaretlemeler sonucunda kaç tane ada olduğu hesaplanır ve ekrana yazdırılır.

Algoritmanın çalışma mantığı, matrisin her elemanına bakarak, eğer eleman 1 ise, o elemandan başlayarak DFS (Depth-First Search) yöntemiyle matristeki diğer 1'lerin olduğu komşu elemanları işaretler ve böylece bir ada oluşturur. Bu işlem, matrisin tamamı taranana kadar devam eder.

Algoritmanın amacı, bir matristeki adaları bulmak ve saymak gibi işlemleri yapmaktır. Bu tür işlemler genellikle harita, resim, video, veri analizi gibi alanlarda kullanılır. Örneğin, bir görüntüdeki nesneleri veya belirli bir özellik taşıyan bölümleri tespit etmek, bir coğrafi haritadaki adaları veya gölleri bulmak, bir veri kümesindeki benzer öğeleri gruplandırmak gibi işlemlerde bu tür algoritmalar kullanılabilir.
