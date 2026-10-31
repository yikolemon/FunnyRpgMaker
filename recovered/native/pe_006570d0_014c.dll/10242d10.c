/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10242d10 */

void __thiscall
FUN_10242d10(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_1007c87c(local_48,0x40,&DAT_10357780,param_7);
  if (iVar1 < 0) {
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  else {
    FUN_10242e60(param_1,param_2,param_3,param_4,param_5,param_6,local_48,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

