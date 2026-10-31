/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071052 */

int FUN_140071052(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    lVar2 = param_1 + 0x138;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x76686561,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    lVar2 = param_1 + 0x198;
  }
  iVar1 = FUN_1400214cf(param_2,0x140109da0,lVar2);
  if (iVar1 == 0) {
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    iVar1 = 0;
  }
  return iVar1;
}

