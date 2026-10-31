/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c685a */

int __fastcall
FUN_101c685a(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  param_5 = (int)param_5 >> 0x1f ^ param_5;
  iVar2 = 1;
  if ((int)param_5 < param_4) {
    local_20 = *param_1;
    iVar1 = *(int *)(param_3 + param_5 * 4);
    iVar2 = FUN_101c461e(param_2,iVar1);
    if ((((iVar2 == 0) &&
         (local_24 = param_1, local_1c = iVar1, uVar3 = FUN_101c4970(param_2,&local_18),
         iVar2 = local_18, local_18 == 0)) && (iVar2 = 1, uVar3 != 0)) &&
       (iVar2 = 9, uVar3 < 0x1000000)) {
      iVar2 = FUN_101c5cb2(param_5,param_6);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_101c461e(param_2,local_1c + 4);
        if ((iVar2 == 0) &&
           (piVar4 = (int *)FUN_101c21f6(local_20,uVar3,&local_18), iVar2 = local_18, local_18 == 0)
           ) {
          iVar2 = FUN_101c4659(param_2,piVar4,uVar3);
          if (iVar2 == 0) {
            pcVar5 = "truetype";
            if ((4 < uVar3) && (*piVar4 == 0x4f54544f)) {
              pcVar5 = "cff";
            }
            iVar2 = FUN_101c602f(uVar3,0,pcVar5,param_6);
            if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
              return iVar2;
            }
            goto LAB_101c69b2;
          }
          FUN_101c0017(local_20,piVar4);
        }
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return iVar2;
  }
LAB_101c69b2:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

