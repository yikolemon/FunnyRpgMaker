/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dfe98 */

void FUN_1407dfe98(uint *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong *unaff_R14;
  undefined1 auVar8 [16];
  
  uVar6 = (ulonglong)param_1 & 0xffffffff;
  uVar2 = *param_1;
  pauVar7 = (undefined1 (*) [16])(ulonglong)((uVar2 * 0x40 + param_1[2]) - 0x40);
  if (*(int *)(pauVar7[2] + 8) == 0) {
    if (1 < (int)uVar2) {
      uVar5 = (ulonglong)(param_1[2] + uVar2 * 0x40);
      iVar4 = FUN_1408b14b0();
      if (((iVar4 == 0) &&
          (*(int *)(uVar5 - 0x58) + *(int *)(uVar5 - 0x5c) == *(int *)(uVar5 - 0x1c))) &&
         (*(int *)(uVar5 - 0x54) == 0)) {
        *unaff_R14 = (ulonglong)uVar2;
        return;
      }
    }
  }
  else {
    auVar1 = *pauVar7;
    auVar8[0] = -(*(char *)(uVar6 + 0x48) == auVar1[0]);
    auVar8[1] = -(*(char *)(uVar6 + 0x49) == auVar1[1]);
    auVar8[2] = -(*(char *)(uVar6 + 0x4a) == auVar1[2]);
    auVar8[3] = -(*(char *)(uVar6 + 0x4b) == auVar1[3]);
    auVar8[4] = -(*(char *)(uVar6 + 0x4c) == auVar1[4]);
    auVar8[5] = -(*(char *)(uVar6 + 0x4d) == auVar1[5]);
    auVar8[6] = -(*(char *)(uVar6 + 0x4e) == auVar1[6]);
    auVar8[7] = -(*(char *)(uVar6 + 0x4f) == auVar1[7]);
    auVar8[8] = -(*(char *)(uVar6 + 0x50) == auVar1[8]);
    auVar8[9] = -(*(char *)(uVar6 + 0x51) == auVar1[9]);
    auVar8[10] = -(*(char *)(uVar6 + 0x52) == auVar1[10]);
    auVar8[0xb] = -(*(char *)(uVar6 + 0x53) == auVar1[0xb]);
    auVar8[0xc] = -(*(char *)(uVar6 + 0x54) == auVar1[0xc]);
    auVar8[0xd] = -(*(char *)(uVar6 + 0x55) == auVar1[0xd]);
    auVar8[0xe] = -(*(char *)(uVar6 + 0x56) == auVar1[0xe]);
    auVar8[0xf] = -(*(char *)(uVar6 + 0x57) == auVar1[0xf]);
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
        != 0xffff) {
      FUN_1407dfc44(uVar6);
      return;
    }
  }
  uVar3 = *(undefined8 *)(uVar6 + 0x50);
  *(undefined8 *)*pauVar7 = *(undefined8 *)(uVar6 + 0x48);
  *(undefined8 *)(*pauVar7 + 8) = uVar3;
  return;
}

