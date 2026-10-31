/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421d3a */

int __fastcall FUN_00421d3a(int *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char *pcVar6;
  uint local_38;
  uint *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  char local_21;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  local_2c = *param_1;
  uVar5 = param_3 & 0xffff;
  if ((int)param_3 < 1) {
    uVar5 = param_3;
  }
  local_28 = FUN_00420b00((int)param_2);
  iVar2 = FUN_00421f35(param_2,uVar5,&local_1c,&local_20,&local_21);
  if (iVar2 == 0) {
    iVar2 = 8;
    if (((uint)param_2[1] < local_1c) || (param_2[1] - local_1c < local_20)) goto LAB_00421dc2;
    local_38 = local_20;
    iVar2 = FUN_00420696((int)param_2,local_1c + local_28);
    if ((iVar2 == 0) &&
       (local_30 = param_2, puVar4 = (uint *)FUN_0041e773(local_2c,local_38,&local_18),
       piVar1 = local_30, iVar2 = local_18, param_2 = piVar1, local_18 == 0)) {
      local_34 = puVar4;
      iVar2 = FUN_004206d1(local_30,puVar4,local_38);
      param_2 = local_30;
      if (iVar2 == 0) {
        pcVar6 = "t1cid";
        if (local_21 == '\0') {
          pcVar6 = "type1";
        }
        iVar2 = FUN_004220b7(param_1,(int)local_34,local_38,(int)uVar5 >> 0x1f & uVar5,
                             (byte *)pcVar6,param_4);
      }
      else {
        FUN_0041c607(local_2c,(int)local_34);
        param_2 = piVar1;
      }
    }
  }
  if (((char)iVar2 == '\x02') && (iVar3 = FUN_00420696((int)param_2,local_28), iVar3 != 0)) {
    iVar2 = iVar3;
  }
LAB_00421dc2:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_38);
  }
  return iVar2;
}

