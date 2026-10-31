/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ea2f4 */

int FUN_100ea2f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = &stack0x0000000c;
  puVar1 = (undefined4 *)FUN_1004303e();
  iVar2 = FUN_1025ea79(*puVar1,puVar1[1],param_1,0x32,param_2,0,&stack0x0000000c);
  iVar3 = -1;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

