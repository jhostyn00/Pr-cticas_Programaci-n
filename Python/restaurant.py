"""
Ejemplo de un pedido para un restaurante online
Hecho por Jhostyn Malpartida Villaty
"""

# Variables

PANTALLA = "principal"
TOTAL_PEDIDO = 0
TOTAL_LISTA = []

# Primera pantalla

while True:
    if PANTALLA == "principal":
        print(
            """
            ------------------------------------
            Bienvenido(a) al Restaurante Virtual
            ------------------------------------

            1. Para empezar su pedido.
            0. Para salir.
            """
        )
        dato = input("Indique un número: ")
        if dato == "1":
            PANTALLA = "menú"
        elif dato == "0":
            print("Saliste del Restaurante")
            break
        else:
            print(f"{'-' *40} \n ingrese un número válido")

# Segunda pantalla

    elif PANTALLA == "menú":
        print(
            """
            1. DESAYUNO
            2. ALMUERZO
            3. CENA

            0.  Salir        
            """
        )
        dato_2 = input("Indique un número: ")
        if dato_2 == "0":
            break
        elif dato_2 == "1":
            PANTALLA = "desayuno"
        elif dato_2 == "2":
            PANTALLA = "almuerzo"
        elif dato_2 == "3":
            PANTALLA = "cena"
        else:
            print(f"{'-' *40} \n ingrese un número válido")

# Tercera pantalla

    elif PANTALLA == "desayuno":
        print(
            """
        DESAYUNOS:

            1. Café             - S/. 4.50
            2. Chocolate        - S/. 8.00
            3. Jugo de frutas   - S/. 6.00
            4. Pan con pollo    - S/. 2.50
            5. Pan con jamón    - S/. 3.00

            
            9.  Volver al menú anterior
            10. Terminar pedido
            0.  Salir        
            """
        )
        dato_3 = input("Indique un número: ")
        if dato_3 == "0":
            break

        elif dato_3 == "9":
            PANTALLA = "menú"
        elif dato_3 in ["1", "2", "3", "4", "5"]:
            precio = {"1": 4.50, "2": 8.00, "3": 6.00, "4": 2.50, "5": 3.00}[dato_3]
            lista = {"1": "Café", "2": "Chocolate", "3": "Jugo de frutas",
                      "4": "Pan con pollo", "5": "Pan con jamón"}[dato_3]
            TOTAL_LISTA.append((lista, precio))
            TOTAL_PEDIDO += precio
            print(f"{'-' *40} \n ¿Desea pedir algo más?")

        elif dato_3 == "10":
            PANTALLA = "pedido"
        else:
            print(f"{'-' *40} \n ingrese un número válido")

# Cuarta pantalla

    elif PANTALLA == "almuerzo":
        print(
            """
        ALMUERZOS:

            1. Causa limeña     - S/. 18.00
            2. Ají de gallina   - S/. 14.00
            3. Lomo saltado     - S/. 15.00
            4. Arroz chaufa     - S/. 12.50

            5. Gaseosa 500 ml   - S/. 2.50
            6. Agua 500 ml      - S/. 2.00

            
            9.  Volver al menú anterior
            10. Terminar pedido
            0.  Salir        
            """
        )
        dato_4 = input("Indique un número: ")
        if dato_4 == "0":
            break

        elif dato_4 == "9":
            PANTALLA = "menú"
        elif dato_4 in ["1", "2", "3", "4"]:
            precio = {"1": 18.00, "2": 14.00, "3": 15.00, "4": 12.50, "5": 2.50, "6": 2.00}[dato_4]
            lista = {"1": "Causa limeña", "2": "Ají de gallina", "3": "Lomo saltado",
                      "4": "Arroz chaufa", "5": "Gaseosa 500 ml", "6": "Agua 500 ml"}[dato_4]
            TOTAL_LISTA.append((lista, precio))
            TOTAL_PEDIDO += precio
            print(f"{'-' *40} \n ¿Desea pedir algo más?")
        elif dato_4 == "10":
            PANTALLA = "pedido"
        else:
            print(f"{'-' *40} \n ingrese un número válido")

# Quinta pantalla

    elif PANTALLA == "cena":
        print(
            """
        CENAS:

            1. Pizza            - S/. 16.00
            2. Menestrón        - S/. 12.00
            3. Caldo de pollo   - S/. 9.50
            4. Ensalada         - S/. 8.00
            

            9.  Volver al menú anterior
            10. Terminar pedido
            0.  Salir        
            """
        )
        dato_5 = input("Indique un número: ")
        if dato_5 == "0":
            break
        elif dato_5 == "9":
            PANTALLA = "menú"
        elif dato_5 in ["1", "2", "3", "4"]:
            precio = {"1": 16.00, "2": 12.00, "3": 9.50, "4": 8.00}[dato_5]
            lista = {"1": "Pizza", "2": "Menestrón", "3": "Caldo de pollo",
                      "4": "Ensalada"}[dato_5]
            TOTAL_LISTA.append((lista, precio))
            TOTAL_PEDIDO += precio
            print(f"{'-' *40} \n ¿Desea pedir algo más?")
        elif dato_5 == "10":
            PANTALLA = "pedido"
        else:
            print(f"{'-' *40} \n ingrese un número válido")

# Última pantalla

    elif PANTALLA == "pedido":
        IGV = TOTAL_PEDIDO * 0.18
        TOTAL = TOTAL_PEDIDO + IGV

        print("\nResumen del Pedido:")
        print("-" * 30)
        for elemento, precio in TOTAL_LISTA:
            print(f"{elemento: <20}{precio: .2f}")
        print("-" * 30)
        print(f"Subtotal:{TOTAL_PEDIDO: .2f}")
        print(f"IGV: 18% de{TOTAL_PEDIDO: .2f}")
        print(f"IGV:{IGV: .2f}\n")
        print(f"Total a pagar: S/.{TOTAL: .2f}\n")
        break
