/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ea18 */

ulonglong FUN_14003ea18(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint param_5)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStackY_88 [32];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  lVar7 = plVar1[6];
  uVar5 = FUN_140020a41((longlong)plVar1,param_2);
  local_4c = (uint)uVar5;
  if (local_4c != 0) goto LAB_14003eb0d;
  cVar2 = FUN_140021246(plVar1,&local_4c);
  uVar5 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_14003eb0d;
  bVar3 = FUN_140021246(plVar1,&local_4c);
  uVar5 = (ulonglong)local_4c;
  if (local_4c != 0) goto LAB_14003eb0d;
  if (cVar2 == '\x01') {
    uVar8 = FUN_140020e0f(plVar1,&local_4c);
    *param_3 = uVar8;
LAB_14003ead0:
    uVar5 = (ulonglong)local_4c;
    if (local_4c != 0) goto LAB_14003eb0d;
    if (bVar3 < 0x40) {
      iVar10 = (bVar3 >> 4) + 1;
      if (uVar8 * iVar10 <= param_5) {
        lVar6 = FUN_14001c617(lVar7,4,0,uVar8,0,(int *)&local_4c);
        *(longlong *)(param_3 + 4) = lVar6;
        uVar5 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_14003eb0d;
        lVar7 = FUN_14001c617(lVar7,4,0,*param_3,0,(int *)&local_4c);
        *(longlong *)(param_3 + 2) = lVar7;
        uVar5 = (ulonglong)local_4c;
        if (local_4c != 0) goto LAB_14003eb0d;
        local_4c = FUN_140021063(plVar1,iVar10 * *param_3);
        if (local_4c == 0) {
          if (*param_3 != 0) {
            lVar7 = plVar1[7];
            uVar5 = 0;
            do {
              lVar6 = 0;
              uVar8 = 0;
              do {
                uVar8 = uVar8 << 8 | (uint)*(byte *)(lVar7 + lVar6);
                lVar6 = lVar6 + 1;
              } while ((bVar3 >> 4) + 1 != (int)lVar6);
              if (uVar8 == 0xffffffff) {
                *(undefined4 *)(*(longlong *)(param_3 + 2) + uVar5 * 4) = 0xffff;
                uVar8 = 0xffff;
              }
              else {
                uVar9 = uVar8 >> (bVar3 & 0xf) + 1;
                if (*param_4 <= uVar9) goto LAB_14003eb08;
                *(uint *)(*(longlong *)(param_3 + 2) + uVar5 * 4) = uVar9;
                uVar8 = uVar8 & (2 << (bVar3 & 0xf)) - 1U;
                if (*(uint *)(*(longlong *)(param_4 + 2) + (ulonglong)uVar9 * 0x20) <= uVar8)
                goto LAB_14003eb08;
              }
              lVar7 = lVar7 + (ulonglong)(bVar3 >> 4) + 1;
              *(uint *)(*(longlong *)(param_3 + 4) + uVar5 * 4) = uVar8;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *param_3);
          }
          FUN_140021187(plVar1);
          uVar5 = (ulonglong)local_4c;
          goto LAB_14003eb0d;
        }
      }
    }
  }
  else if (cVar2 == '\0') {
    uVar4 = FUN_140020aa5(plVar1,&local_4c);
    uVar8 = (uint)uVar4;
    *param_3 = (uint)uVar4;
    goto LAB_14003ead0;
  }
LAB_14003eb08:
  uVar5 = 8;
LAB_14003eb0d:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return uVar5;
}

