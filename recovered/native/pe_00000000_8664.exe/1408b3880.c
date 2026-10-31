/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b3880 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1408b3880(void)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar9 [16];
  undefined1 auVar11 [15];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  char local_res8;
  char *pcVar7;
  uint *puVar8;
  
  if (_DAT_150c5103b != 0) {
    auVar12 = pshuflw(ZEXT216(CONCAT11(local_res8,local_res8)),
                      ZEXT216(CONCAT11(local_res8,local_res8)),0);
    uVar2 = -1 << (sbyte)(unaff_retaddr_00 & 0xf);
    uVar5 = unaff_retaddr_00 - (unaff_retaddr_00 & 0xf);
    while( true ) {
      pcVar7 = (char *)(ulonglong)uVar5;
      auVar11 = SUB1615((undefined1  [16])0x0,1);
      auVar10[0] = -(*pcVar7 == '\0');
      auVar10[1] = -(pcVar7[1] == '\0');
      auVar10[2] = -(pcVar7[2] == '\0');
      auVar10[3] = -(pcVar7[3] == '\0');
      auVar10[4] = -(pcVar7[4] == '\0');
      auVar10[5] = -(pcVar7[5] == '\0');
      auVar10[6] = -(pcVar7[6] == '\0');
      auVar10[7] = -(pcVar7[7] == '\0');
      auVar10[8] = -(pcVar7[8] == '\0');
      auVar10[9] = -(auVar11[8] == pcVar7[9]);
      auVar10[10] = -(auVar11[9] == pcVar7[10]);
      auVar10[0xb] = -(auVar11[10] == pcVar7[0xb]);
      auVar10[0xc] = -(auVar11[0xb] == pcVar7[0xc]);
      auVar10[0xd] = -(auVar11[0xc] == pcVar7[0xd]);
      auVar10[0xe] = -(auVar11[0xd] == pcVar7[0xe]);
      auVar10[0xf] = -(auVar11[0xe] == pcVar7[0xf]);
      cVar1 = auVar12[0];
      auVar9[0] = -(*pcVar7 == cVar1);
      auVar9[1] = -(pcVar7[1] == auVar12[1]);
      auVar9[2] = -(pcVar7[2] == auVar12[2]);
      auVar9[3] = -(pcVar7[3] == auVar12[3]);
      auVar9[4] = -(pcVar7[4] == auVar12[4]);
      auVar9[5] = -(pcVar7[5] == auVar12[5]);
      auVar9[6] = -(pcVar7[6] == auVar12[6]);
      auVar9[7] = -(pcVar7[7] == auVar12[7]);
      auVar9[8] = -(pcVar7[8] == cVar1);
      auVar9[9] = -(pcVar7[9] == auVar12[1]);
      auVar9[10] = -(pcVar7[10] == auVar12[2]);
      auVar9[0xb] = -(pcVar7[0xb] == auVar12[3]);
      auVar9[0xc] = -(pcVar7[0xc] == auVar12[4]);
      auVar9[0xd] = -(pcVar7[0xd] == auVar12[5]);
      auVar9[0xe] = -(pcVar7[0xe] == auVar12[6]);
      auVar9[0xf] = -(pcVar7[0xf] == auVar12[7]);
      auVar10 = auVar10 | auVar9;
      uVar2 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) & uVar2;
      if (uVar2 != 0) break;
      uVar2 = 0xffffffff;
      uVar5 = uVar5 + 0x10;
    }
    iVar6 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    puVar3 = (uint *)(ulonglong)(iVar6 + uVar5);
    if (cVar1 != (char)*puVar3) {
      puVar3 = (uint *)0x0;
    }
    return puVar3;
  }
  while (puVar3 = (uint *)(ulonglong)unaff_retaddr, (unaff_retaddr & 3) != 0) {
    unaff_retaddr = unaff_retaddr + 1;
    if ((char)*puVar3 == local_res8) {
      return puVar3;
    }
    if ((char)*puVar3 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar2 = *puVar3;
      uVar4 = uVar2 ^ CONCAT22(CONCAT11(local_res8,local_res8),CONCAT11(local_res8,local_res8));
      uVar5 = uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff;
      iVar6 = (int)puVar3;
      puVar8 = (uint *)(ulonglong)(iVar6 + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      puVar3 = puVar8;
      if ((uVar5 & 0x81010100) != 0) {
        if ((uVar5 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar2 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar2 = puVar8[-1];
    if ((char)uVar2 == local_res8) {
      return puVar3;
    }
    if ((char)uVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar1 = (char)(uVar2 >> 8);
    if (cVar1 == local_res8) {
      return (uint *)(ulonglong)(iVar6 + 1);
    }
    if (cVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar1 = (char)(uVar2 >> 0x10);
    if (cVar1 == local_res8) {
      return (uint *)(ulonglong)(iVar6 + 2);
    }
    if (cVar1 == '\0') break;
    cVar1 = (char)(uVar2 >> 0x18);
    if (cVar1 == local_res8) {
      return (uint *)(ulonglong)(iVar6 + 3);
    }
    puVar3 = puVar8;
    if (cVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

