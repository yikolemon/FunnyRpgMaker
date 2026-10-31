/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401731c5 */

int FUN_1401731c5(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x6d617870,param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_14012e0a0(param_2,&DAT_140eb1030,param_1 + 0x170);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x176) = 0;
      *(undefined8 *)(param_1 + 0x17e) = 0;
      iVar2 = 0;
      iVar1 = iVar2;
      if ((0xffff < *(int *)(param_1 + 0x170)) &&
         (iVar1 = FUN_14012e0a0(param_2,&DAT_140eb1040,param_1 + 0x170), iVar1 == 0)) {
        if (*(ushort *)(param_1 + 0x184) < 0x40) {
          *(undefined2 *)(param_1 + 0x184) = 0x40;
        }
        iVar1 = iVar2;
        if (0xfffb < *(ushort *)(param_1 + 0x180)) {
          *(undefined2 *)(param_1 + 0x180) = 0xfffb;
        }
      }
    }
  }
  return iVar1;
}

