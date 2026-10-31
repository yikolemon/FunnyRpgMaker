/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044fee */

short * __thiscall FUN_10044fee(int *param_1,undefined4 param_2,int param_3,short *param_4)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int *local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 *local_50;
  int *local_4c;
  int *local_48;
  char local_44;
  undefined2 local_43;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined1 local_1e;
  undefined4 local_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1;
  *param_1 = param_3;
  param_1[1] = param_1[1] - (param_3 - iVar2 >> 1);
  piVar1 = param_1 + 4;
  FUN_100450f0(&local_40,piVar1,param_2);
  if ((char)local_40 == '\r') {
    (*pcStack_34)(param_1,piVar1,uStack_38);
    psVar3 = (short *)*param_1;
  }
  else {
    local_44 = (char)local_40;
    local_2c = 0;
    local_28 = 0xffffffff;
    local_24 = 0;
    local_20 = 0;
    local_43 = 0;
    local_1e = 1;
    local_1c = 0x20;
    local_50 = &local_2c;
    local_4c = param_1;
    local_48 = piVar1;
    psVar3 = (short *)FUN_10045c98(param_3,param_4,&local_50);
    if ((psVar3 == param_4) || (*psVar3 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Missing \'}\' in format string.");
    }
    local_5c = piVar1;
    local_58 = &local_2c;
    FUN_10045df6(&local_54,&local_5c,local_40,uStack_3c,uStack_38,pcStack_34);
    *piVar1 = local_54;
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return psVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

