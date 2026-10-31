/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d03f5 */

undefined4 FUN_100d03f5(undefined2 *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (param_2 < 1) {
    uVar4 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
    }
  }
  else {
    uVar1 = param_2 - 1;
    local_18 = &stack0x00000010;
    puVar2 = (uint *)FUN_1004303e();
    uVar3 = FUN_1025e953(*puVar2 | 1,puVar2[1],param_1,uVar1,param_3,0,&stack0x00000010);
    uVar4 = 0x8007007a;
    if ((((int)uVar3 < 0) || (uVar1 < uVar3)) || (uVar4 = 0, uVar3 == uVar1)) {
      param_1[param_2 + -1] = 0;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

