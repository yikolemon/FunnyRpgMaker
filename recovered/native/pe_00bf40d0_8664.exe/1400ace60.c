/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400ace60 */

void FUN_1400ace60(uint param_1,int param_2,undefined8 param_3,double param_4,ulonglong param_5)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStackY_f8 [32];
  double local_b8;
  undefined8 local_b0;
  uint local_a8 [28];
  ulonglong local_38;
  
  uVar5 = param_5;
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_f8;
  local_b8 = param_4;
  local_b0 = param_3;
  bVar1 = FUN_1400ad020(param_1,&local_b8,param_5);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[7] = 0;
    local_a8[8] = 0;
    local_a8[9] = 0;
    local_a8[10] = 0;
    local_a8[0xb] = 0;
    local_a8[0xc] = 0;
    local_a8[0xd] = 0;
    local_a8[0xe] = 0;
    local_a8[0xf] = 0;
    local_a8[0x10] = 0;
    local_a8[0x11] = 0;
    local_a8[0x12] = 0;
    local_a8[0x13] = 0;
    local_a8[0x14] = 0;
    local_a8[0x15] = 0;
    local_a8[0x16] = 0;
    local_a8[0x17] = 0;
    local_a8[0x18] = 0;
    local_a8[0x19] = 0;
    local_a8[0x1a] = 0;
    local_a8[0x1b] = 0;
    FUN_1400ad530(local_a8,&param_5,(ulonglong)param_1,param_2,(uint *)&local_b0,(uint *)&local_b8,0
                 );
    uVar5 = param_5;
  }
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          uVar4 = (param_1 & 2) * 2;
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 5;
  }
  uVar2 = FUN_14008ec80();
  if ((char)uVar2 == '\0') {
    if (uVar4 == 1) {
      p_Var3 = FUN_140095e5c();
      *(undefined4 *)p_Var3 = 0x21;
    }
    else if ((uVar4 == 2) || (uVar4 == 3)) {
      p_Var3 = FUN_140095e5c();
      *(undefined4 *)p_Var3 = 0x22;
    }
  }
  else if (uVar4 != 0) {
    FUN_1400ad3d0(uVar4,param_2,param_3,0,local_b8,(uint)uVar5);
    goto LAB_1400acfb7;
  }
  FUN_1400a9d40((uint)uVar5,0xffc0);
LAB_1400acfb7:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_f8);
}

