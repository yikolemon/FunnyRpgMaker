/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10267448 */

void FUN_10267448(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  int in_stack_00000028;
  undefined1 local_314 [780];
  uint local_8;
  
  iVar1 = in_stack_00000028;
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
  else {
    uVar3 = FUN_10267b6d(param_1,&stack0x00000008,local_314);
    FUN_102678c0(uVar3,local_314,iVar1);
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

