/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c4fe0 */

/* WARNING: Type propagation algorithm not settling */

char * FUN_1401c4fe0(char *param_1,byte param_2,char *param_3)

{
  ushort uVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  iVar5 = (uint)param_2 * 0x1010101;
  pcVar2 = (char *)0x0;
  cVar4 = (char)iVar5;
  pcVar3 = param_1;
  if ((char *)0x1f < param_3) {
    if (((ulonglong)param_1 & 0xf) != 0) {
      pcVar2 = (char *)((ulonglong)((uint)param_1 & 0xf) - 0x10);
      param_3 = param_3 + (longlong)pcVar2;
      param_1 = param_1 + -(longlong)pcVar2;
      do {
        pcVar3 = param_1;
        if (cVar4 == param_1[(longlong)pcVar2]) goto LAB_1401c506c;
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != (char *)0x0);
      if (param_3 < (char *)0x20) goto joined_r0x0001401c505c;
    }
    do {
      auVar9[0] = -(*param_1 == cVar4);
      cVar6 = (char)((uint)iVar5 >> 8);
      auVar9[1] = -(param_1[1] == cVar6);
      cVar7 = (char)((uint)iVar5 >> 0x10);
      auVar9[2] = -(param_1[2] == cVar7);
      cVar8 = (char)((uint)iVar5 >> 0x18);
      auVar9[3] = -(param_1[3] == cVar8);
      auVar9[4] = -(param_1[4] == cVar4);
      auVar9[5] = -(param_1[5] == cVar6);
      auVar9[6] = -(param_1[6] == cVar7);
      auVar9[7] = -(param_1[7] == cVar8);
      auVar9[8] = -(param_1[8] == cVar4);
      auVar9[9] = -(param_1[9] == cVar6);
      auVar9[10] = -(param_1[10] == cVar7);
      auVar9[0xb] = -(param_1[0xb] == cVar8);
      auVar9[0xc] = -(param_1[0xc] == cVar4);
      auVar9[0xd] = -(param_1[0xd] == cVar6);
      auVar9[0xe] = -(param_1[0xe] == cVar7);
      auVar9[0xf] = -(param_1[0xf] == cVar8);
      uVar1 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      pcVar3 = param_1;
      if (uVar1 != 0) goto LAB_1401c506c;
      pcVar3 = param_1 + 0x10;
      auVar10[0] = -(param_1[0x10] == cVar4);
      auVar10[1] = -(param_1[0x11] == cVar6);
      auVar10[2] = -(param_1[0x12] == cVar7);
      auVar10[3] = -(param_1[0x13] == cVar8);
      auVar10[4] = -(param_1[0x14] == cVar4);
      auVar10[5] = -(param_1[0x15] == cVar6);
      auVar10[6] = -(param_1[0x16] == cVar7);
      auVar10[7] = -(param_1[0x17] == cVar8);
      auVar10[8] = -(param_1[0x18] == cVar4);
      auVar10[9] = -(param_1[0x19] == cVar6);
      auVar10[10] = -(param_1[0x1a] == cVar7);
      auVar10[0xb] = -(param_1[0x1b] == cVar8);
      auVar10[0xc] = -(param_1[0x1c] == cVar4);
      auVar10[0xd] = -(param_1[0x1d] == cVar6);
      auVar10[0xe] = -(param_1[0x1e] == cVar7);
      auVar10[0xf] = -(param_1[0x1f] == cVar8);
      uVar1 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
      pcVar2 = (char *)0x0;
      if (uVar1 != 0) {
        for (; (uVar1 >> (longlong)pcVar2 & 1) == 0; pcVar2 = pcVar2 + 1) {
        }
      }
      if (uVar1 != 0) goto LAB_1401c506c;
      param_1 = param_1 + 0x20;
      param_3 = param_3 + 0xffffffffffffffe0;
      pcVar3 = param_1;
    } while ((char *)0x1f < param_3);
  }
joined_r0x0001401c505c:
  while( true ) {
    if (param_3 == (char *)0x0) {
      return pcVar2;
    }
    if (cVar4 == *pcVar3) break;
    param_3 = param_3 + 0xffffffffffffffff;
    pcVar3 = pcVar3 + 1;
  }
LAB_1401c506c:
  return pcVar2 + (longlong)pcVar3;
}

