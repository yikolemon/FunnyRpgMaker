/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004228e2 */

int __fastcall
FUN_004228e2(int *param_1,int *param_2,int param_3,int param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  int *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  uVar5 = (int)param_5 >> 0x1f ^ param_5;
  iVar1 = 1;
  if ((int)uVar5 < param_4) {
    local_20 = *param_1;
    uVar2 = *(uint *)(param_3 + uVar5 * 4);
    iVar1 = FUN_00420696((int)param_2,uVar2);
    if ((((iVar1 == 0) &&
         (local_24 = param_1, local_1c = uVar2, uVar2 = FUN_004209e8(param_2,&local_18),
         iVar1 = local_18, local_18 == 0)) && (iVar1 = 1, uVar2 != 0)) &&
       (iVar1 = 9, uVar2 < 0x1000000)) {
      iVar1 = FUN_00421d3a(local_24,param_2,uVar5,param_6);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00420696((int)param_2,local_1c + 4);
        if ((iVar1 == 0) &&
           (puVar3 = (uint *)FUN_0041e773(local_20,uVar2,&local_18), iVar1 = local_18, local_18 == 0
           )) {
          iVar1 = FUN_004206d1(param_2,puVar3,uVar2);
          if (iVar1 == 0) {
            pcVar4 = "truetype";
            if ((4 < uVar2) && (*puVar3 == 0x4f54544f)) {
              pcVar4 = &DAT_00503b6c;
            }
            iVar1 = FUN_004220b7(local_24,(int)puVar3,uVar2,0,(byte *)pcVar4,param_6);
            if (DAT_0050e8c0 == (local_14 ^ (uint)&local_24)) {
              return iVar1;
            }
            goto LAB_00422a3a;
          }
          FUN_0041c607(local_20,(int)puVar3);
        }
      }
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_24)) {
    return iVar1;
  }
LAB_00422a3a:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_24);
}

