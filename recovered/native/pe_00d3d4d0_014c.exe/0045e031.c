/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e031 */

undefined1 * __fastcall FUN_0045e031(int *param_1)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  puVar3 = (uint *)FUN_0045dd89((int)param_1,(int *)&local_18);
  puVar5 = (undefined1 *)0xa0;
  if (puVar3 != (uint *)0x0) {
    bVar1 = false;
    bVar2 = false;
    do {
      uVar4 = FUN_0045ddce(puVar3,local_18);
      if ((int)uVar4 < 0x35) {
        if (1 < uVar4 - 0x32) {
          puVar5 = (undefined1 *)0xa0;
          if (uVar4 - 0x14 < 2) {
            puVar5 = (undefined1 *)0x0;
          }
          goto LAB_0045e0c5;
        }
        if (bVar1) break;
        puVar5 = FUN_0045e805(param_1);
        bVar1 = true;
LAB_0045e09a:
        if (puVar5 != (undefined1 *)0x0) goto LAB_0045e0c5;
      }
      else if (uVar4 != 0x4b) {
        if ((uVar4 == 0x35) && (!bVar2)) {
          puVar5 = (undefined1 *)FUN_0045e664(param_1);
          bVar2 = true;
          goto LAB_0045e09a;
        }
        break;
      }
      puVar3 = (uint *)FUN_0045dd89((int)param_1,(int *)&local_18);
    } while (puVar3 != (uint *)0x0);
    puVar5 = (undefined1 *)0xa0;
  }
LAB_0045e0c5:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return puVar5;
}

