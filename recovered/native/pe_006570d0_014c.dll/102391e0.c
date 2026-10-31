/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102391e0 */

undefined1 * __thiscall
FUN_102391e0(int param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_18;
  int local_10;
  undefined2 local_c [2];
  undefined1 local_8 [4];
  
  if (param_2 != param_3) {
    local_10 = param_1 + 0x18;
    do {
      local_8[0] = *param_2;
      local_18 = 0;
      iVar2 = FUN_1022d8f0(local_c,local_8,1,&local_18,local_10);
      uVar1 = 0xffff;
      if (-1 < iVar2) {
        uVar1 = local_c[0];
      }
      param_2 = param_2 + 1;
      *param_4 = uVar1;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

