/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140173340 */

undefined8 FUN_140173340(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,param_2,0);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_14012e0a0(param_2,&DAT_140eb1170,(int *)(param_1 + 0x270));
    if ((int)uVar2 == 0) {
      iVar1 = *(int *)(param_1 + 0x270);
      if (iVar1 < 0x25000) {
        if ((iVar1 != 0x10000) && (iVar1 != 0x20000)) {
          return 0x9a;
        }
      }
      else if ((iVar1 != 0x30000) && (iVar1 != 0x25000)) {
        return 0x9a;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

