/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012f3c2 */

int FUN_14012f3c2(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 == (undefined8 *)0x0) {
    local_3c = 0x21;
  }
  else if (param_2 == 0) {
    local_3c = 6;
  }
  else {
    *param_4 = 0;
    uVar1 = *param_1;
    lVar2 = FUN_140128a1f(uVar1,0x48,&local_3c);
    if (local_3c == 0) {
      FUN_140129628(lVar2,param_2,param_3);
      *(undefined8 *)(lVar2 + 0x10) = uVar1;
      *(code **)(lVar2 + 0x28) = FUN_14012f47b;
      *param_4 = lVar2;
      local_3c = 0;
    }
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

