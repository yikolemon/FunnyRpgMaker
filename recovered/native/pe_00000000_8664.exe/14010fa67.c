/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010fa67 */

void FUN_14010fa67(longlong param_1)

{
  float fVar1;
  short sVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  char local_d2;
  char local_d1;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  lVar6 = DAT_140f2a910;
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  if ((longlong)*(short *)(param_1 + 0x78) == 0) {
    lVar11 = param_1 + 0x1a8;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x1c8) + (longlong)*(short *)(param_1 + 0x78) * 0x18 + -0x18;
  }
  fVar1 = *(float *)(DAT_140f2a910 + 0x1330);
  fVar13 = *(float *)((ulonglong)(*(short *)(param_1 + 0x22a) < 1) * 0x20 + 0xf4 + param_1) +
           *(float *)(param_1 + 0xe8);
  fVar12 = (float)FUN_14007b71f(*(undefined4 *)(param_1 + 0xfc),
                                (*(float *)(lVar11 + 4) + fVar13) - *(float *)(param_1 + 0xe8));
  fVar5 = DAT_140e8d800;
  uVar4 = DAT_1402112e0;
  iVar8 = *(int *)(param_1 + 0x6c);
  if (0 < iVar8) {
    fVar14 = (float)(int)(fVar1 * DAT_140211518);
    fVar1 = *(float *)(lVar11 + 8);
    uVar10 = 0;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + (uVar10 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar10 & 0x1f) & 1) != 0) {
        sVar2 = *(short *)(*(longlong *)(param_1 + 0x28) + uVar10 * 2);
        lVar11 = (longlong)sVar2 * 0x74;
        if ((((*(uint *)(*(longlong *)(param_1 + 0x18) + lVar11) & 0x40000020) == 0) &&
            ((lVar11 = *(longlong *)(param_1 + 0x18) + lVar11, fVar3 = fVar12,
             (*(byte *)(param_1 + 5) & 8) == 0 ||
             (fVar3 = fVar1 + fVar13, *(char *)(param_1 + 0x23d) != '\0')))) &&
           ((*(char *)(lVar11 + 0x69) != '\0' || (*(short *)(param_1 + 0x214) == sVar2)))) {
          uVar9 = FUN_1401103b3(param_1,(longlong)sVar2 & 0xffffffff,(int)*(short *)(param_1 + 0x78)
                               );
          local_d0 = *(float *)(lVar11 + 0xc);
          local_c8 = local_d0 + fVar14;
          local_d0 = local_d0 - fVar14;
          local_cc = fVar13;
          local_c4 = fVar3;
          FUN_14008a9ce(&local_d0,uVar9,0,2);
          local_d1 = '\0';
          local_d2 = '\0';
          local_e8 = 0x40910;
          cVar7 = FUN_1400ac79b(&local_d0,uVar9,&local_d1,&local_d2);
          if ((cVar7 != '\0') && (cVar7 = FUN_1400920d0(0), cVar7 != '\0')) {
            FUN_1401103de(param_1,(int)sVar2);
            FUN_14008076e();
            local_d2 = '\0';
          }
          if (local_d2 == '\x01') {
            if (*(short *)(param_1 + 0x214) == -1) {
              uVar9 = uVar4;
              if ((longlong)*(short *)(param_1 + 0x220) != -1) {
                uVar9 = *(undefined4 *)
                         (*(longlong *)(param_1 + 0x18) + 0xc +
                         (longlong)*(short *)(param_1 + 0x220) * 0x74);
              }
              *(undefined4 *)(param_1 + 0xe0) = uVar9;
            }
            *(short *)(param_1 + 0x212) = sVar2;
            *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
LAB_14010fcca:
            *(short *)(param_1 + 0x20c) = sVar2;
            FUN_14009224e(4);
          }
          else if ((local_d1 == '\x01') && (fVar5 < *(float *)(lVar6 + 0x1670))) goto LAB_14010fcca;
          iVar8 = *(int *)(param_1 + 0x6c);
        }
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)iVar8);
  }
  if (DAT_140f17b40 != (local_c0 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_c0 ^ (ulonglong)auStack_108);
  }
  return;
}

