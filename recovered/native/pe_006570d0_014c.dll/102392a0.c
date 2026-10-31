/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102392a0 */

void __thiscall
FUN_102392a0(int param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
            undefined1 *param_5)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 local_1c;
  int local_14;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_2 != param_3) {
    local_14 = param_1 + 0x18;
    do {
      local_1c = 0;
      iVar1 = FUN_1022c060(local_10,*param_2,&local_1c,local_14);
      uVar2 = local_10[0];
      if (iVar1 != 1) {
        uVar2 = param_4;
      }
      param_2 = param_2 + 1;
      *param_5 = uVar2;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

