# A4988-Driver
Step Motor Run with A4988

Güç Bağlantısı:

Sürücüye güç sağlamak için bir güç kaynağı kullanmanız gerekmektedir. Bu güç kaynağı motorun çalışması için gerekli olan voltajı sağlamalıdır.
Güç kaynağınızı seçin ve sürücünün VDD pinine (+) ve GND pinine (-) bağlayın. VDD, sürücünün güç beslemesi için kullanılan pindir.
Motor Bağlantısı:

Adım motorunu sürücüye bağlamak için 4 veya 6 pinli bir adım motor kablosu kullanmalısınız. Kablonun bir ucu motorun üzerindeki uygun konektöre takılırken diğer ucu sürücünün uygun pinlerine bağlanmalıdır.
A4988 sürücüsü, adım motorunun STEP (adım) ve DIR (yön) pinlerini kontrol etmek için kullanılır.
Adım motorunun STEP pinini sürücünün STEP pinine bağlayın.
Adım motorunun DIR pinini sürücünün DIR pinine bağlayın.
Kontrol Sinyalleri Bağlantısı:

A4988 sürücüsü, Arduino veya diğer mikrodenetleyici ile haberleşmek için kontrol sinyalleri alır.
Arduino kartınızın boş bir dijital pini seçin.
Sürücünün STEP (adım) pinini Arduino'nun seçtiğiniz pinine bağlayın.
Sürücünün DIR (yön) pinini Arduino'nun seçtiğiniz başka bir dijital pinine bağlayın.
Güç ve GND Bağlantısı:

Arduino kartınızın GND pinini sürücünün GND pinine bağlayın.
Arduino kartınızın 5V veya 3.3V pininden sürücünün VCC pinine bir bağlantı yapmanız gerekmeyebilir. A4988 sürücüsü, içindeki regülatör sayesinde 5V veya 3.3V güç kaynağını doğrudan kullanabilir.




Kodun başında, ```stepPin``` ve ```dirPin``` olarak adlandırılan pinler tanımlanır. ```stepPin``` adım sinyalini, ```dirPin``` ise yön sinyalini kontrol etmek için kullanılır.
```setup()``` fonksiyonunda, ```stepPin``` ve ```dirPin``` pinleri çıkış olarak ayarlanır.
```loop()``` fonksiyonu sürekli olarak çalışır ve motoru sağa ve sola döndürür.
İlk olarak, ```dirPin``` yüksek seviyeye (HIGH) ayarlanır, bu da motorun sağa döneceğini belirtir.
Ardından, bir for döngüsü 200 defa çalışır. Her döngüde, ```stepPin``` pinine bir süreliğine yüksek seviye (HIGH) sinyali gönderilir, ardından bir süreliğine düşük seviye (LOW) sinyali gönderilir. Bu adımlar, motorun adım adım dönmesini sağlar.
```delayMicroseconds(500)``` fonksiyonu, adım sinyalinin yüksek veya düşük seviyede ne kadar süreyle kalacağını belirler. Bu örnekte, her seviye için 500 mikrosaniye (0.5 milisaniye) beklenir.
Döngü tamamlandıktan sonra, ```delay(10000)``` fonksiyonu kullanılarak 10 saniye beklenir.
Sonraki adımda, dirPin düşük seviyeye (LOW) ayarlanır, bu da motorun sola döneceğini belirtir.
Tekrar bir for döngüsü kullanarak motorun sola dönmesi sağlanır.
Döngü tamamlandıktan sonra, tekrar ```delay(10000)``` fonksiyonu kullanılarak 10 saniye beklenir.
Ardından, döngü ```loop()``` fonksiyonunun başına döner ve işlem tekrarlanır.
