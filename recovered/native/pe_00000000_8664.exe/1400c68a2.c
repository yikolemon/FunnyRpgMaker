/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c68a2 */

undefined4 FUN_1400c68a2(undefined8 param_1,char *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0 [20];
  ulonglong local_60;
  
  lVar7 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar7 + 0x1608) + 0x10e) == '\0') {
    if (param_2 == (char *)0x0) {
      uVar8 = 0x1a;
    }
    else {
      uVar8 = 0x1000001e;
      if (*param_2 != '\x01') goto LAB_1400c690f;
    }
    uVar4 = FUN_140080066(*(longlong *)(lVar7 + 0x1608),param_1,0);
    uVar5 = FUN_1400c524f(uVar4,uVar8 | param_3,param_1,0);
    lVar7 = DAT_140f2a910;
    if (param_2 != (char *)0x0) {
      puVar11 = (undefined4 *)(DAT_140f2a910 + 0x1fe0);
      puVar9 = puVar11;
      puVar10 = local_b0;
      for (lVar6 = 0x14; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar12 = FUN_14007b71f(*(undefined4 *)(DAT_140f2a910 + 0x1fec),
                             (*(float *)(DAT_140f2a910 + 0x1ff4) - *(float *)(DAT_140f2a910 + 0xdf4)
                             ) - *(float *)(DAT_140f2a910 + 0x1320));
      fVar1 = *(float *)(lVar7 + 0x1ff0);
      fVar2 = *(float *)(lVar7 + 0xdf8);
      uVar4 = FUN_1400915a5("#CLOSE",0,uVar4);
      local_b8 = uVar12;
      local_b4 = fVar1 + fVar2;
      cVar3 = FUN_1400ad5b7(uVar4);
      if (cVar3 != '\0') {
        *param_2 = '\0';
      }
      puVar9 = local_b0;
      for (lVar7 = 0x14; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
  }
  else {
LAB_1400c690f:
    uVar5 = 0;
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_d8)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_d8);
}

