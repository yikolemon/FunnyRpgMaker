/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022610e */

undefined8 FUN_18022610e(longlong param_1,int *param_2,ulonglong *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  
  if ((param_2[1] != *param_2) && (lVar5 = *(longlong *)(param_1 + 0x4e0), lVar5 != 0)) {
    pbVar6 = *(byte **)(param_2 + 2);
    pbVar7 = *(byte **)(lVar5 + 0x30);
    if (pbVar7 <= pbVar6 + (-4 - (ulonglong)(uint)(param_2[1] << 2))) {
      if (pbVar6 < pbVar7) {
        return 0;
      }
      if (pbVar7 + (ulonglong)(uint)(*(int *)(lVar5 + 0x28) << 2) + 4 <=
          pbVar6 + (-4 - (ulonglong)(uint)(param_2[1] << 2))) {
        return 0;
      }
      if (pbVar6 <= (byte *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)*(uint *)(lVar5 + 0x88) + -4))
      {
        bVar1 = *pbVar6;
        bVar2 = pbVar6[1];
        bVar3 = pbVar6[2];
        bVar4 = pbVar6[3];
        *(undefined1 *)(param_3 + 1) = 0;
        uVar8 = (ulonglong)bVar1 * 0x1000000 + *(longlong *)(lVar5 + 0x30) +
                (ulonglong)bVar4 + (ulonglong)bVar3 * 0x100 + (ulonglong)bVar2 * 0x10000;
        if ((*(ulonglong *)(lVar5 + 0x40) <= uVar8) &&
           (uVar8 < (ulonglong)*(uint *)(lVar5 + 0x88) + *(longlong *)(lVar5 + 0x80))) {
          *param_3 = uVar8;
          *(byte **)(param_2 + 2) = pbVar6 + 4;
          param_2[1] = param_2[1] + 1;
          return CONCAT71((int7)(uVar8 >> 8),1);
        }
      }
    }
  }
  return 0;
}

