/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10261a08 */

bool __thiscall FUN_10261a08(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int local_8;
  
  if (param_2 < 0x80000000) {
    param_2 = param_2 * 2;
    if (((*(int *)(param_1 + 0x404) == 0) && (param_2 < 0x401)) ||
       (param_2 <= *(uint *)(param_1 + 0x400))) {
      bVar1 = true;
    }
    else {
      local_8 = param_1;
      local_8 = FUN_10274170(param_2);
      bVar1 = local_8 != 0;
      if (bVar1) {
        FUN_1025ecfd(&local_8);
        *(uint *)(param_1 + 0x400) = param_2;
      }
      FUN_10274120(local_8);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x1c) = 1;
    *(undefined4 *)(param_3 + 0x18) = 0xc;
    bVar1 = false;
  }
  return bVar1;
}

