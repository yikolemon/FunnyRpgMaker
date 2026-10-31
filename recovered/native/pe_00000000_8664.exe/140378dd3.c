/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140378dd3 */

void FUN_140378dd3(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  short sVar8;
  bool bVar9;
  
  sVar3 = *(short *)(param_1 + 0x22a);
  iVar7 = 1;
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    iVar7 = (int)*(short *)(param_1 + 0x202);
  }
  bVar9 = true;
  if (*(int *)(param_1 + 0x6c) <= (int)*(short *)(param_1 + 0x202)) {
    iVar4 = memcmp(*(void **)(param_1 + 0x58),*(void **)(param_1 + 0x50),
                   (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2);
    bVar9 = iVar4 != 0;
  }
  iVar4 = (iVar7 << (0 < sVar3)) + (0 < sVar3 | 2);
  FUN_1403a684c(*(undefined8 *)(param_1 + 0x1a0),
                *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 800),iVar4 + (uint)bVar9);
  sVar3 = -1;
  if (bVar9 != false) {
    sVar3 = (ushort)bVar9 + (short)iVar4 + -1;
  }
  *(short *)(param_1 + 0x232) = sVar3;
  *(undefined2 *)(param_1 + 0x234) = 1;
  sVar3 = (short)iVar7 + 2;
  if (*(short *)(param_1 + 0x22a) < 1) {
    sVar3 = 1;
  }
  *(short *)(param_1 + 0x236) = sVar3;
  if (0 < *(int *)(param_1 + 0x6c)) {
    sVar3 = 2;
    lVar5 = 0x6a;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar1 + -1 + lVar5) == '\x01') && (*(char *)(lVar1 + lVar5) == '\x01')) {
        *(short *)(lVar1 + -8 + lVar5) = sVar3;
        sVar8 = 0;
        if (0 < *(short *)(param_1 + 0x22a)) {
          sVar8 = (short)iVar7 + 1;
        }
        *(short *)(lVar1 + -6 + lVar5) = sVar8 + sVar3;
        sVar8 = sVar3;
        sVar3 = sVar3 + (ushort)((*(byte *)(param_1 + 6) & 0x10) == 0);
      }
      else {
        sVar8 = *(short *)(param_1 + 0x232);
        *(short *)(lVar1 + -6 + lVar5) = sVar8;
        *(short *)(lVar1 + -8 + lVar5) = sVar8;
      }
      *(short *)(lVar1 + -10 + lVar5) = sVar8;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x74;
    } while (lVar6 < *(int *)(param_1 + 0x6c));
  }
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x128);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x2c0);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x2b8);
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x168);
  return;
}

