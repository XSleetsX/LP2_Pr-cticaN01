class Tarjeta:
    def __init__(self, numero, fecha_venc, CVV):
        self.numero = numero
        self.fecha_venc = fecha_venc
        self.CVV = CVV

    def getNumero(self):
        return self.numero

    def getFechaVenc(self):
        return self.fecha_venc

    def getCVV(self):
        return self.CVV

    def __str__(self):
        return f"Numero: {self.numero}, Fecha Vencimiento: {self.fecha_venc}, CVV: {self.CVV}"
