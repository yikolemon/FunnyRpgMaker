/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011cd83 */

undefined8 FUN_18011cd83(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  lVar4 = DAT_180419160;
  if ((((*(char *)(DAT_180419160 + 0x2428) == '\x01') &&
       ((*(uint *)(DAT_180419160 + 0x1fe8) & 1) != 0)) &&
      (*(longlong *)(DAT_180419160 + 0x1618) != 0)) &&
     ((lVar2 = *(longlong *)(DAT_180419160 + 0x1608),
      *(longlong *)(lVar2 + 0x428) == *(longlong *)(*(longlong *)(DAT_180419160 + 0x1618) + 0x428)
      && (*(char *)(lVar2 + 0x10e) == '\0')))) {
    lVar1 = (ulonglong)((*(uint *)(DAT_180419160 + 0x1fe8) & 2) << 4) + DAT_180419160;
    puVar6 = (undefined8 *)(lVar1 + 0x1fec);
    iVar5 = *(int *)(DAT_180419160 + 0x1fe0);
    if (iVar5 == 0) {
      iVar5 = FUN_180117f28(lVar2,puVar6);
      FUN_1801088af(iVar5);
    }
    if (*(int *)(lVar4 + 0x2444) != iVar5) {
      uVar3 = *(undefined8 *)(lVar1 + 0x1ff4);
      *(undefined8 *)(lVar4 + 0x2478) = *puVar6;
      *(undefined8 *)(lVar4 + 0x2480) = uVar3;
      puVar6 = (undefined8 *)(lVar2 + 0x2b8);
      if ((*(uint *)(lVar4 + 0x1fe8) >> 9 & 1) != 0) {
        puVar6 = (undefined8 *)(lVar4 + 0x201c);
      }
      uVar3 = puVar6[1];
      *(undefined8 *)(lVar4 + 0x2488) = *puVar6;
      *(undefined8 *)(lVar4 + 0x2490) = uVar3;
      *(int *)(lVar4 + 0x2498) = iVar5;
      *(undefined1 *)(lVar4 + 0x242a) = 1;
      return CONCAT71((int7)((ulonglong)(lVar4 + 0x201c) >> 8),1);
    }
  }
  return 0;
}

