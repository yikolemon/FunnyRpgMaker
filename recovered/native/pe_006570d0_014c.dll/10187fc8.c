/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187fc8 */

void __fastcall FUN_10187fc8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  iVar2 = *param_1;
  iVar1 = iVar2 * 0x40 + param_1[2];
  if (*(int *)(iVar1 + -0x18) == 0) {
    if (1 < iVar2) {
      iVar4 = param_1[2] + iVar2 * 0x40;
      iVar3 = FUN_102595e0(param_1 + 0x12,iVar4 + -0x80,0x24);
      if (((iVar3 == 0) &&
          (*(int *)(iVar4 + -0x58) + *(int *)(iVar4 + -0x5c) == *(int *)(iVar4 + -0x1c))) &&
         (*(int *)(iVar4 + -0x54) == 0)) {
        *param_1 = iVar2 + -1;
        return;
      }
    }
  }
  else {
    auVar5[0] = -((char)param_1[0x12] == *(char *)(iVar1 + -0x40));
    auVar5[1] = -(*(char *)((int)param_1 + 0x49) == *(char *)(iVar1 + -0x3f));
    auVar5[2] = -(*(char *)((int)param_1 + 0x4a) == *(char *)(iVar1 + -0x3e));
    auVar5[3] = -(*(char *)((int)param_1 + 0x4b) == *(char *)(iVar1 + -0x3d));
    auVar5[4] = -((char)param_1[0x13] == *(char *)(iVar1 + -0x3c));
    auVar5[5] = -(*(char *)((int)param_1 + 0x4d) == *(char *)(iVar1 + -0x3b));
    auVar5[6] = -(*(char *)((int)param_1 + 0x4e) == *(char *)(iVar1 + -0x3a));
    auVar5[7] = -(*(char *)((int)param_1 + 0x4f) == *(char *)(iVar1 + -0x39));
    auVar5[8] = -((char)param_1[0x14] == *(char *)(iVar1 + -0x38));
    auVar5[9] = -(*(char *)((int)param_1 + 0x51) == *(char *)(iVar1 + -0x37));
    auVar5[10] = -(*(char *)((int)param_1 + 0x52) == *(char *)(iVar1 + -0x36));
    auVar5[0xb] = -(*(char *)((int)param_1 + 0x53) == *(char *)(iVar1 + -0x35));
    auVar5[0xc] = -((char)param_1[0x15] == *(char *)(iVar1 + -0x34));
    auVar5[0xd] = -(*(char *)((int)param_1 + 0x55) == *(char *)(iVar1 + -0x33));
    auVar5[0xe] = -(*(char *)((int)param_1 + 0x56) == *(char *)(iVar1 + -0x32));
    auVar5[0xf] = -(*(char *)((int)param_1 + 0x57) == *(char *)(iVar1 + -0x31));
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        != 0xffff) {
      FUN_10187d74();
      return;
    }
  }
  iVar2 = param_1[0x13];
  iVar3 = param_1[0x14];
  iVar4 = param_1[0x15];
  *(int *)(iVar1 + -0x40) = param_1[0x12];
  *(int *)(iVar1 + -0x3c) = iVar2;
  *(int *)(iVar1 + -0x38) = iVar3;
  *(int *)(iVar1 + -0x34) = iVar4;
  return;
}

