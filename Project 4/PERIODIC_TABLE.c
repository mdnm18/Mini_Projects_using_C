#include <stdio.h>
#include <string.h>

// Define a struct to hold element details
typedef struct 
{
    char name[20];
    char symbol[3];
    int atomicNumber;
    char electronicConfiguration[30];
    char discoveredBy[50];
    char charge[5];
} Element;

// Function to display element details
void displayElementDetails(Element element) 
{
    printf("NAME : %s\n", element.name);
    printf("SYMBOL : %s\n", element.symbol);
    printf("ATOMIC NUMBER : %d\n", element.atomicNumber);
    printf("ELECTRONIC CONFIGURATION : %s\n", element.electronicConfiguration);
    printf("DISCOVERED BY : %s\n", element.discoveredBy);
    printf("CHARGE : %s\n", element.charge);
}

int main() 
{
    // Define the elements in an array of structs
    Element elements[118] = {
						        {"HYDROGEN", "H", 1, "1s^1", "HENRY CAVENDISH", "+1"},
						        {"HELIUM", "He", 2, "1s^2", "PIERRE JULES CESAR JANSSEN", "0"},
						        {"LITHIUM", "Li", 3, "1s^2 2s^1", "JOHAN AUGUST ARFEVEDSON", "+1"},
						        {"BERYLLIUM", "Be", 4, "1s^2 2s^2", "NICHOLAS L. V. G. A. BEYER", "+2"},
						        {"BORON", "B", 5, "1s^2 2s^2 2p^1", "J. L. GAY-LUSSAC", "+3"},
						        {"CARBON", "C", 6, "1s^2 2s^2 2p^2", "ANONYMOUS", "±4"},
						        {"NITROGEN", "N", 7, "1s^2 2s^2 2p^3", "D. RUTHERFORD", "-3"},
						        {"OXYGEN", "O", 8, "1s^2 2s^2 2p^4", "CAVENDISH", "-2"},
						        {"FLUORINE", "F", 9, "1s^2 2s^2 2p^5", "HENRY MOissan", "-1"},
						        {"NEON", "Ne", 10, "1s^2 2s^2 2p^6", "J. W. STRUTT", "0"},
						        {"SODIUM", "Na", 11, "1s^2 2s^2 2p^6 3s^1", "HENRY CAVENDISH", "+1"},
						        {"MAGNESIUM", "Mg", 12, "1s^2 2s^2 2p^6 3s^2", "JOHN HULKE", "+2"},
						        {"ALUMINIUM", "Al", 13, "1s^2 2s^2 2p^6 3s^2 3p^1", "HUMPHRY DAVY", "+3"},
						        {"SILICON", "Si", 14, "1s^2 2s^2 2p^6 3s^2 3p^2", "J. J. BERZELIUS", "±4"},
						        {"PHOSPHORUS", "P", 15, "1s^2 2s^2 2p^6 3s^2 3p^3", "HENRY H. R. KIRK", "-3"},
						        {"SULFUR", "S", 16, "1s^2 2s^2 2p^6 3s^2 3p^4", "ANONYMOUS", "-2"},
						        {"CHLORINE", "Cl", 17, "1s^2 2s^2 2p^6 3s^2 3p^5", "ANTOINE LAVOISIER", "-1"},
						        {"ARGON", "Ar", 18, "1s^2 2s^2 2p^6 3s^2 3p^6", "W. RAMSAY", "0"},
						        {"POTASSIUM", "K", 19, "1s^2 2s^2 2p^6 3s^2 3p^6 4s^1", "SIR HUMPHRY DAVY", "+1"},
						        {"CALCIUM", "Ca", 20, "1s^2 2s^2 2p^6 3s^2 3p^6 4s^2", "HENRY MOISSAN", "+2"},
						        {"SCANDIUM", "Sc", 21, "[Ar] 3d^1 4s^2", "LARS FOLKMAN", "+3"},
						        {"TITANIUM", "Ti", 22, "[Ar] 3d^2 4s^2", "W. G. K. G. H. ROEBUCK", "+4"},
						        {"VANADIUM", "V", 23, "[Ar] 3d^3 4s^2", "ANDERS AHLSTRÖM", "+5"},
						        {"CHROMIUM", "Cr", 24, "[Ar] 3d^5 4s^1", "L. C. W. D. A. A. W. M. WENZEL", "+6"},
						        {"MANGANESE", "Mn", 25, "[Ar] 3d^5 4s^2", "JOHN HULKE", "+7"},
						        {"IRON", "Fe", 26, "[Ar] 3d^6 4s^2", "HENRY BECQUEREL", "+2"},
						        {"COBALT", "Co", 27, "[Ar] 3d^7 4s^2", "GEORG M. R. K. C. H. H. J. VON G. S. G. N. E. B. H.", "+2"},
						        {"NICKEL", "Ni", 28, "[Ar] 3d^8 4s^2", "G. B. G. H. J. B. R.", "+2"},
						        {"COPPER", "Cu", 29, "[Ar] 3d^{10} 4s^1", "HUMPHRY DAVY", "+1"},
						        {"ZINC", "Zn", 30, "[Ar] 3d^{10} 4s^2", "W. G. G. A. H. F. E. M.", "+2"},
						        {"GALLIUM", "Ga", 31, "[Ar] 3d^{10} 4s^2 4p^1", "PAULÉ LÉVÉN", "+3"},
						        {"GERMANIUM", "Ge", 32, "[Ar] 3d^{10} 4s^2 4p^2", "C. A. D. R.", "±4"},
						        {"ARSENIC", "As", 33, "[Ar] 3d^{10} 4s^2 4p^3", "C. A. D. R.", "-3"},
						        {"SELENIUM", "Se", 34, "[Ar] 3d^{10} 4s^2 4p^4", "HENRY MOISSAN", "-2"},
						        {"BROMINE", "Br", 35, "[Ar] 3d^{10} 4s^2 4p^5", "ANTOINE LAVOISIER", "-1"},
						        {"KRYPTON", "Kr", 36, "[Ar] 3d^{10} 4s^2 4p^6", "W. RAMSAY", "0"},
						        {"RUBIDIUM", "Rb", 37, "[Kr] 5s^1", "B. A. F. A. K.", "+1"},
						        {"STRONTIUM", "Sr", 38, "[Kr] 5s^2", "SIR HUMPHRY DAVY", "+2"},
						        {"Yttrium", "Y", 39, "[Kr] 4d^1 5s^2", "J. J. G. G.", "+3"},
						        {"ZIRCONIUM", "Zr", 40, "[Kr] 4d^2 5s^2", "HENRY MOISSAN", "+4"},
						        {"NIOBIUM", "Nb", 41, "[Kr] 4d^4 5s^1", "C. E. G. C. J. C.", "+5"},
						        {"MOLYBDENUM", "Mo", 42, "[Kr] 4d^5 5s^1", "C. E. G. C. J. C.", "+6"},
						        {"TECHNETIUM", "Tc", 43, "[Kr] 4d^5 5s^2", "C. E. G. C. J. C.", "+7"},
						        {"RUTHENIUM", "Ru", 44, "[Kr] 4d^7 5s^2", "H. H. H.", "+4"},
						        {"RHODIUM", "Rh", 45, "[Kr] 4d^8 5s^1", "W. R. H.", "+3"},
						        {"PALLADIUM", "Pd", 46, "[Kr] 4d^{10}", "HENRY MOISSAN", "+2"},
						        {"SILVER", "Ag", 47, "[Kr] 4d^{10} 5s^1", "H. C. H.", "+1"},
						        {"CADMIUM", "Cd", 48, "[Kr] 4d^{10} 5s^2", "H. C. H.", "+2"},
						        {"INDIUM", "In", 49, "[Kr] 4d^{10} 5s^2 5p^1", "G. J. B. R. C.", "+3"},
						        {"TIN", "Sn", 50, "[Kr] 4d^{10} 5s^2 5p^2", "C. J. A. W. K. C. C. H.", "±4"},
						        {"ANTIMONY", "Sb", 51, "[Kr] 4d^{10} 5s^2 5p^3", "C. A. D. R.", "-3"},
						        {"TELLURIUM", "Te", 52, "[Kr] 4d^{10} 5s^2 5p^4", "C. A. D. R.", "-2"},
						        {"IODINE", "I", 53, "[Kr] 4d^{10} 5s^2 5p^5", "C. A. D. R.", "-1"},
						        {"XENON", "Xe", 54, "[Kr] 4d^{10} 5s^2 5p^6", "W. RAMSAY", "0"},
						        {"CESIUM", "Cs", 55, "[Xe] 6s^1", "HENRY MOISSAN", "+1"},
						        {"BARIUM", "Ba", 56, "[Xe] 6s^2", "HENRY MOISSAN", "+2"},
						        {"LANTHANUM", "La", 57, "[Xe] 5d^1 6s^2", "H. H. H.", "+3"},
						        {"CERIUM", "Ce", 58, "[Xe] 4f^1 5d^1 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"NEODYMIUM", "Nd", 59, "[Xe] 4f^4 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"PROMETHIUM", "Pm", 60, "[Xe] 4f^5 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"SAMARIUM", "Sm", 61, "[Xe] 4f^6 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"EUROPIUM", "Eu", 62, "[Xe] 4f^7 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"GADOLINIUM", "Gd", 63, "[Xe] 4f^7 5d^1 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"TERBIUM", "Tb", 64, "[Xe] 4f^9 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"DYSPROSIUM", "Dy", 65, "[Xe] 4f^{10} 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"HOLMIUM", "Ho", 66, "[Xe] 4f^{11} 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"ERBIUM", "Er", 67, "[Xe] 4f^{12} 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"THULIUM", "Tm", 68, "[Xe] 4f^{13} 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"Ytterbium", "Yb", 69, "[Xe] 4f^{14} 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"LUTETIUM", "Lu", 70, "[Xe] 4f^{14} 5d^1 6s^2", "A. A. G. D. C. G.", "+3"},
						        {"HAFNIUM", "Hf", 72, "[Xe] 4f^{14} 5d^2 6s^2", "D. M. S. A. H. H. H.", "+4"},
						        {"TANTALUM", "Ta", 73, "[Xe] 4f^{14} 5d^3 6s^2", "D. M. S. A. H. H. H.", "+5"},
						        {"TUNGSTEN", "W", 74, "[Xe] 4f^{14} 5d^4 6s^2", "D. M. S. A. H. H. H.", "+6"},
						        {"RHENIUM", "Re", 75, "[Xe] 4f^{14} 5d^5 6s^2", "D. M. S. A. H. H. H.", "+7"},
						        {"Osmium", "Os", 76, "[Xe] 4f^{14} 5d^6 6s^2", "D. M. S. A. H. H. H.", "+8"},
						        {"IRIDIUM", "Ir", 77, "[Xe] 4f^{14} 5d^7 6s^2", "D. M. S. A. H. H. H.", "+3"},
						        {"PLATINUM", "Pt", 78, "[Xe] 4f^{14} 5d^9 6s^1", "D. M. S. A. H. H. H.", "+2"},
						        {"GOLD", "Au", 79, "[Xe] 4f^{14} 5d^{10} 6s^1", "D. M. S. A. H. H. H.", "+1"},
						        {"MERCURY", "Hg", 80, "[Xe] 4f^{14} 5d^{10} 6s^2", "D. M. S. A. H. H. H.", "+2"},
						        {"THALLIUM", "Tl", 81, "[Xe] 4f^{14} 5d^{10} 6s^2 6p^1", "D. M. S. A. H. H. H.", "+3"},
						        {"LEAD", "Pb", 82, "[Xe] 4f^{14} 5d^{10} 6s^2 6p^2", "D. M. S. A. H. H. H.", "±4"},
						        {"BISMUTH", "Bi", 83, "[Xe] 4f^{14} 5d^{10} 6s^2 6p^3", "D. M. S. A. H. H. H.", "-3"},
						        {"POLONIUM", "Po", 84, "[Xe] 4f^{14} 5d^{10} 6s^2 6p^4", "D. M. S. A. H. H. H.", "-2"},
						        {"ASTATINE", "At", 85, "[Xe] 4f^{14} 5d^{10} 6s^2 6p^5", "D. M. S. A. H. H. H.", "-1"},
						        {"RADON", "Rn", 86, "[Xe] 4f^{14} 5d^{10} 6s^2 6p^6", "D. M. S. A. H. H. H.", "0"},
						        {"FRANCIUM", "Fr", 87, "[Rn] 7s^1", "A. G. J. G.", "+1"},
						        {"RADIUM", "Ra", 88, "[Rn] 7s^2", "A. G. J. G.", "+2"},
						        {"ACTINIUM", "Ac", 89, "[Rn] 6d^1 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"THORIUM", "Th", 90, "[Rn] 6d^2 7s^2", "F. G. H. F. A. A. A. A.", "+4"},
						        {"PROTACTINIUM", "Pa", 91, "[Rn] 5f^2 6d^1 7s^2", "F. G. H. F. A. A. A. A.", "+5"},
						        {"URANIUM", "U", 92, "[Rn] 5f^3 6d^1 7s^2", "F. G. H. F. A. A. A. A.", "+6"},
						        {"NEPTUNIUM", "Np", 93, "[Rn] 5f^4 6d^1 7s^2", "F. G. H. F. A. A. A. A.", "+7"},
						        {"PLUTONIUM", "Pu", 94, "[Rn] 5f^6 7s^2", "F. G. H. F. A. A. A. A.", "+4"},
						        {"AMERICIUM", "Am", 95, "[Rn] 5f^7 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"CURIUM", "Cm", 96, "[Rn] 5f^{7} 6d^{1} 7s^{2}", "F. G. H. F. A. A. A. A.", "+3"},
						        {"BERKELIUM", "Bk", 97, "[Rn] 5f^{9} 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"CALIFORNIUM", "Cf", 98, "[Rn] 5f^{10} 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"EINSTEINIUM", "Es", 99, "[Rn] 5f^{11} 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"FERMIUM", "Fm", 100, "[Rn] 5f^{12} 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"MENDELEVIUM", "Md", 101, "[Rn] 5f^{13} 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"NOBELIUM", "No", 102, "[Rn] 5f^{14} 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"LAWRENCIUM", "Lr", 103, "[Rn] 5f^{14} 6d^1 7s^2", "F. G. H. F. A. A. A. A.", "+3"},
						        {"RUTHERFORDIUM", "Rf", 104, "[Rn] 5f^{14} 6d^2 7s^2", "F. G. H. F. A. A. A. A.", "+4"},
						        {"DUBNIUM", "Db", 105, "[Rn] 5f^{14} 6d^3 7s^2", "F. G. H. F. A. A. A. A.", "+5"},
						        {"SEABORGIUM", "Sg", 106, "[Rn] 5f^{14} 6d^4 7s^2", "F. G. H. F. A. A. A. A.", "+6"},
						        {"BOHRIUM", "Bh", 107, "[Rn] 5f^{14} 6d^5 7s^2", "F. G. H. F. A. A. A. A.", "+7"},
						        {"HASSIUM", "Hs", 108, "[Rn] 5f^{14} 6d^6 7s^2", "F. G. H. F. A. A. A. A.", "+8"},
						        {"MEITNERIUM", "Mt", 109, "[Rn] 5f^{14} 6d^7 7s^2", "F. G. H. F. A. A. A. A.", "+9"},
						        {"DARMSTADTIUM", "Ds", 110, "[Rn] 5f^{14} 6d^8 7s^2", "F. G. H. F. A. A. A. A.", "+10"},
						        {"ROENTGENIUM", "Rg", 111, "[Rn] 5f^{14} 6d^9 7s^2", "F. G. H. F. A. A. A. A.", "+11"},
						        {"COPERNICIUM", "Cn", 112, "[Rn] 5f^{14} 6d^{10} 7s^2", "F. G. H. F. A. A. A. A.", "+12"},
						        {"NIHONIUM", "Nh", 113, "[Rn] 5f^{14} 6d^{10} 7s^2 7p^1", "F. G. H. F. A. A. A. A.", "+3"},
						        {"FLEROVIUM", "Fl", 114, "[Rn] 5f^{14} 6d^{10} 7s^2 7p^2", "F. G. H. F. A. A. A. A.", "+4"},
						        {"MOSCOVIUM", "Mc", 115, "[Rn] 5f^{14} 6d^{10} 7s^2 7p^3", "F. G. H. F. A. A. A. A.", "+5"},
						        {"LIVERMORIUM", "Lv", 116, "[Rn] 5f^{14} 6d^{10} 7s^2 7p^4", "F. G. H. F. A. A. A. A.", "+6"},
						        {"Tennessine", "Ts", 117, "[Rn] 5f^{14} 6d^{10} 7s^2 7p^5", "F. G. H. F. A. A. A. A.", "-1"},
						        {"OGANESSON", "Og", 118, "[Rn] 5f^{14} 6d^{10} 7s^2 7p^6", "YURIY OGANESYAN", "0"}
						    };

    int choice, atomicNumber, exitChoice;
    printf("<----------WELCOME TO MODERN PERIODIC TABLE---------->\n\n");
    printf("> ENTER 1 TO KNOW ABOUT AN ELEMENT\n");
    printf("> ENTER 2 TO CLOSE THE PERIODIC TABLE\n\n");
    printf("ENTER : ");
    scanf("%d", &choice);
    if (choice == 1) 
	{
        printf("> ENTER THE ATOMIC NUMBER OF THE ELEMENT TO BE SEARCHED : ");
        scanf("%d", &atomicNumber);
        if (atomicNumber >= 1 && atomicNumber <= 118) 
		{
            displayElementDetails(elements[atomicNumber-1]);
        } 
		else
		{
            printf("ELEMENT NOT FOUND\n");
        }
    } 
	else if (choice == 2) 
	{
        printf("DO YOU WANT TO EXIT ? (YES/NO)\n");
        printf("> PRESS 1 FOR 'YES'\n");
        printf("> PRESS 2 FOR 'NO'\n");
        printf("ENTER : ");
        scanf("%d", &exitChoice);
        if (exitChoice == 1) 
		{
            printf("THE PERIODIC TABLE HAS CLOSED\n");
        } 
		else if (exitChoice == 2) 
		{
            printf("PERIODIC TABLE HAS NOT CLOSED AND YOU CAN CONTINUE TO LEARN MORE ABOUT ELEMENTS\n");
        }
    }
    return 0;
}
