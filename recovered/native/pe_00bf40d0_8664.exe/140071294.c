/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071294 */

int FUN_140071294(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x706f7374,param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_1400214cf(param_2,0x140109f30,param_1 + 0x270);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x270);
      if (iVar1 < 0x25000) {
        if ((iVar1 != 0x10000) && (iVar1 != 0x20000)) {
          return 0x9a;
        }
      }
      else if ((iVar1 != 0x30000) && (iVar1 != 0x25000)) {
        return 0x9a;
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

