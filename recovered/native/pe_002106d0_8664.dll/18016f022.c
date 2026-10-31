/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016f022 */

void FUN_18016f022(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  if ((*(char *)(lVar2 + 0x10e) == '\0') && (lVar3 = *(longlong *)(lVar2 + 0x208), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) == 1) {
      *(float *)(lVar2 + 0x158) =
           (float)(int)(*(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x19c) +
                       *(float *)(lVar2 + 0x1a0));
    }
    else {
      iVar5 = *(int *)(lVar3 + 0xc) + 1;
      iVar6 = 0;
      if (iVar5 != *(int *)(lVar3 + 0x10)) {
        iVar6 = iVar5;
      }
      *(int *)(lVar3 + 0xc) = iVar6;
      FUN_18011a356();
      FUN_18016a90f(lVar2,(longlong)*(int *)(lVar3 + 0xc) * 0x1c + *(longlong *)(lVar3 + 0x68) + 0xc
                   );
      FUN_180195542(lVar3 + 0x70,*(undefined8 *)(lVar2 + 800),*(int *)(lVar3 + 0xc) + 1);
      fVar1 = *(float *)(lVar4 + 0xe04);
      uVar7 = FUN_180102463(*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar2 + 0x15c));
      *(undefined4 *)(lVar3 + 0x20) = uVar7;
      if (*(int *)(lVar3 + 0xc) < 1) {
        uVar7 = FUN_180102463(fVar1 - *(float *)(lVar2 + 0x90),0);
        *(undefined4 *)(lVar2 + 0x1a0) = uVar7;
        *(undefined1 *)(lVar2 + 0x198) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(lVar3 + 0x20);
        fVar9 = *(float *)(lVar2 + 0x19c);
        fVar8 = *(float *)(lVar2 + 0x1a0);
      }
      else {
        fVar8 = (float)FUN_18016e43a();
        fVar9 = *(float *)(lVar2 + 0x19c);
        fVar8 = (fVar8 - fVar9) + fVar1;
        *(float *)(lVar2 + 0x1a0) = fVar8;
      }
      *(float *)(lVar2 + 0x158) = (float)(int)(fVar9 + *(float *)(lVar2 + 0x60) + fVar8);
      *(undefined4 *)(lVar2 + 0x15c) = *(undefined4 *)(lVar3 + 0x1c);
      *(undefined8 *)(lVar2 + 0x180) = 0;
      *(undefined4 *)(lVar2 + 400) = 0;
      fVar9 = (float)FUN_18016e43a(*(undefined4 *)(lVar3 + 0xc));
      fVar8 = (float)FUN_18016e43a(*(int *)(lVar3 + 0xc) + 1);
      FUN_18011a05a((fVar8 - fVar9) * DAT_1802de7b4);
      *(float *)(lVar2 + 0x2a0) = (fVar8 + *(float *)(lVar2 + 0x60)) - fVar1;
    }
  }
  return;
}

