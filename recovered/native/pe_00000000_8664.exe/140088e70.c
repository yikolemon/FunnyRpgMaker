/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140088e70 */

void FUN_140088e70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  iVar3 = *(int *)(param_1 + 0x2930);
  if (0 < iVar3) {
    lVar6 = 8;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2938) + lVar6);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xb8) == *(int *)(param_1 + 4))) {
        if (((*(byte *)(lVar1 + 0xd4) & 1) != 0) &&
           (((lVar2 = *(longlong *)(lVar1 + 0x90), lVar2 != 0 &&
             ((*(byte *)(lVar1 + 0xd4) & 4) == 0)) && (*(longlong *)(lVar1 + 0x20) == 0)))) {
          fStack_54 = (float)FUN_14009376e();
          fStack_50 = (float)*(undefined8 *)(lVar1 + 0x48);
          local_58 = fStack_50 + 0.0;
          fStack_4c = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x48) >> 0x20);
          fStack_54 = fStack_54 + fStack_4c;
          fStack_50 = (float)*(undefined8 *)(lVar1 + 0x50) + fStack_50;
          fStack_4c = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x50) >> 0x20) + fStack_4c;
          local_68 = *(undefined8 *)(lVar2 + 0x60);
          uStack_60 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 0x68) >> 0x20) +
                               (float)((ulonglong)local_68 >> 0x20),
                               (float)*(undefined8 *)(lVar2 + 0x68) + (float)local_68);
          uVar4 = FUN_1400e7f57(&local_58,&local_68,*(undefined4 *)(param_1 + 0xed4));
          lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 800);
          FUN_1400e0ab6(lVar2 + 0x88,lVar2,0);
          local_78 = *(undefined4 *)(*(longlong *)(lVar1 + 0x90) + 0x98);
          local_70 = uVar4;
          FUN_1400de294(*(undefined8 *)(*(longlong *)(lVar1 + 0x90) + 800),&local_58,&fStack_50,
                        *(undefined4 *)(lVar1 + 100));
          iVar3 = *(int *)(param_1 + 0x2930);
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < iVar3);
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
}

