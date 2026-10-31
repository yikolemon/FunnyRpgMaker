/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ad9d7 */

int FUN_100ad9d7(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  undefined8 uVar9;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4650;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_2[4] == 0) {
    iVar8 = 0;
  }
  else {
    if (7 < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    iVar4 = FUN_102288f0(&local_28,param_2,0x80,0x2000000);
    local_14 = 0;
    if (iVar4 == 0) {
      uVar5 = FUN_10004c42(0x104,0);
      local_2c = CONCAT31((int3)((uint)uVar5 >> 8),1);
      iVar3 = 0;
      do {
        while( true ) {
          local_24 = iVar3;
          puVar7 = param_1;
          if (7 < (uint)param_1[5]) {
            puVar7 = (undefined4 *)*param_1;
          }
          local_34 = param_1[4];
          uVar9 = FUN_10228980(local_28,puVar7,local_34,local_24);
          iVar8 = (int)((ulonglong)uVar9 >> 0x20);
          uVar6 = (uint)uVar9;
          if (uVar6 == 0) break;
          local_14 = 0;
          local_30 = uVar6;
          FUN_10004c42(uVar6,0);
          iVar3 = local_24;
          if (local_30 < local_34) {
            bVar2 = true;
            iVar8 = iVar4;
            goto code_r0x100adaea;
          }
        }
        bVar1 = (byte)local_2c & iVar8 == 3;
        local_2c = 0;
        iVar3 = 2;
        iVar4 = iVar8;
      } while (bVar1 != 0);
      param_1[4] = 0;
      puVar7 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar7 = (undefined4 *)*param_1;
      }
      *(undefined2 *)puVar7 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = false;
      local_24 = 0;
      iVar8 = iVar4;
    }
code_r0x100adaea:
    local_14 = 0xffffffff;
    FUN_10228960(local_28);
    if (bVar2) {
      if (local_24 == 0) {
        puVar7 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar7 = (undefined4 *)*param_1;
        }
        iVar8 = 0;
        if (5 < (uint)param_1[4]) {
          iVar4 = FUN_100047c3(puVar7,L"\\\\?\\",4);
          if ((iVar4 == 4) && ((puVar7[2] & 0xffffffdf) - 0x3a0041 < 0x1a)) {
            FUN_100ae6f6(0,4);
          }
          else if (7 < (uint)param_1[4]) {
            if (7 < (uint)param_1[5]) {
              param_1 = (undefined4 *)*param_1;
            }
            iVar4 = FUN_100047c3(param_1,L"\\\\?\\UNC\\",8);
            if (iVar4 == 8) {
              FUN_100ae6f6(2,6);
            }
          }
        }
      }
      else {
        FUN_10044a66(0,L"\\\\?\\GLOBALROOT",0xe);
        iVar8 = 0;
      }
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return iVar8;
}

