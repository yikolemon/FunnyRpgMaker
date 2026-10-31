/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071119 */

int FUN_140071119(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x6d617870,param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_1400214cf(param_2,0x140109df0,param_1 + 0x170);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      iVar1 = 0;
      if ((0xffff < *(int *)(param_1 + 0x170)) &&
         (iVar1 = FUN_1400214cf(param_2,0x140109e00,param_1 + 0x170), iVar1 == 0)) {
        if (*(ushort *)(param_1 + 0x184) < 0x40) {
          *(undefined2 *)(param_1 + 0x184) = 0x40;
        }
        iVar1 = 0;
        if (0xfffb < *(ushort *)(param_1 + 0x180)) {
          *(undefined2 *)(param_1 + 0x180) = 0xfffb;
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}

