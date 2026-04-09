#include <iosstream>

class HardwareComponent {
    public:
        HardwareComponent(n:string)
        virtual void getSpecs();
        virtual float getPowerConsumption();
        string getName();
}


class CPU{
    public:
        CPU(string type, int num, float cs);

    private:
        string type;
        int number;
        float clockSpeed;

}

class RAM{
    public:
        RAM(string name, int size, string type){
            this.type = type;
            this.size = size;
        }
        void getSpecs(){
            cout << size << " GB " << "type: "  << type << endl;      
            }
        float getPowerConsumption(){
            return size*0.5
        };


    private:
        int size;
        string type;
}

class GPU{
    public:
        GPU(string none, int v, float cs){
            vram = v;
            clockSpeed = cs;
        }
        void getSpecs(){
            cout << "VRAM " << vram << "B CS " << clockSpeed << "Hz" << endl;
        }
        float getPowerConsumption();
    private:
        int vram;
        float clockSpeed;
}