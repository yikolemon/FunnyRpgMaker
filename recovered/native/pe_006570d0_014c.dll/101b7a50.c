/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7a50 */

void __fastcall FUN_101b7a50(uint *param_1)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar5 = 0;
  piVar2 = &DAT_103023fc;
  do {
    if (piVar2[-1] == (*param_1 & 0xe000)) {
      iVar4 = 0xf;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      puVar3 = (undefined1 *)(iVar4 + *piVar2);
      iVar5 = -iVar5;
      goto LAB_101b7a9a;
    }
    iVar5 = iVar5 + -1;
    piVar2 = piVar2 + 3;
  } while (iVar5 != -5);
  puVar3 = &DAT_10356101;
  iVar5 = 5;
LAB_101b7a9a:
  cVar1 = FUN_10132c48("Sizing Policy",puVar3,0);
  if (cVar1 != '\0') {
    iVar4 = 0;
    do {
      local_1c = 0;
      cVar1 = FUN_10133727(*(undefined4 *)((int)&DAT_103023fc + iVar4),iVar5 * 0xc == iVar4,0,
                           &local_1c);
      if (cVar1 != '\0') {
        *param_1 = *param_1 & 0xffff1fff | *(uint *)((int)&DAT_103023f8 + iVar4);
      }
      iVar4 = iVar4 + 0xc;
    } while (iVar4 != 0x3c);
    FUN_101334a7();
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_1012d1be(&DAT_1034960f);
  cVar1 = FUN_10115d1a();
  if (cVar1 != '\0') {
    fVar6 = (float10)FUN_10111f20();
    local_20 = (float)fVar6;
    FUN_101119c9(local_20 * DAT_10302620);
    iVar5 = -0x3c;
    do {
      FUN_10132188();
      FUN_1012d08c("%s:",*(undefined4 *)((int)&PTR_s_Two_103358fb_5_10302438 + iVar5));
      FUN_10132188();
      fVar6 = (float10)FUN_10115023();
      local_24 = (float)fVar6;
      iVar4 = FUN_100fcb2d();
      FUN_101150be(*(float *)(iVar4 + 0x7c) * DAT_102b70e0 + local_24);
      FUN_1012d079(*(undefined4 *)(&UNK_1030243c + iVar5),0);
      iVar5 = iVar5 + 0xc;
    } while (iVar5 != 0);
    FUN_10111a82();
    thunk_FUN_1010ad44();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

