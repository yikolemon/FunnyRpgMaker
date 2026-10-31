/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c86d0 */

ulonglong FUN_1408c86d0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar5;
  int iVar6;
  ulonglong unaff_RDI;
  uint *puVar7;
  uint unaff_retaddr;
  uint local_resc;
  uint *puVar4;
  
  if (local_resc == 0) goto LAB_1408c876f;
  puVar4 = (uint *)(unaff_RDI >> 0x20);
  puVar7 = (uint *)(unaff_RDI & 0xffffffff);
  if ((unaff_RDI & 0x300000000) != 0) {
    while( true ) {
      uVar2 = *puVar4;
      uVar3 = (int)puVar4 + 1;
      puVar4 = (uint *)(ulonglong)uVar3;
      *(char *)puVar7 = (char)uVar2;
      uVar5 = (int)puVar7 + 1;
      puVar7 = (uint *)(ulonglong)uVar5;
      local_resc = local_resc - 1;
      if (local_resc == 0) break;
      if ((char)uVar2 == '\0') goto joined_r0x0001408c8744;
      if ((uVar3 & 3) == 0) {
        uVar2 = local_resc >> 2;
        goto joined_r0x0001408c871c;
      }
    }
    goto LAB_1408c8736;
  }
  uVar2 = local_resc >> 2;
  if (uVar2 != 0) {
LAB_1408c877f:
    uVar3 = *puVar4;
    uVar5 = *puVar4;
    puVar4 = (uint *)(ulonglong)((int)puVar4 + 4);
    iVar6 = (int)puVar7;
    if (((uVar3 ^ 0xffffffff ^ uVar3 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar5 == '\0') {
        *puVar7 = 0;
joined_r0x0001408c87d5:
        while( true ) {
          uVar2 = uVar2 - 1;
          puVar7 = (uint *)(ulonglong)(iVar6 + 4);
          if (uVar2 == 0) break;
LAB_1408c87d9:
          *puVar7 = 0;
          iVar6 = (int)puVar7;
        }
        cVar1 = '\0';
        local_resc = local_resc & 3;
        if (local_resc != 0) goto LAB_1408c8763;
        goto LAB_1408c87ec;
      }
      if ((char)(uVar5 >> 8) == '\0') {
        *puVar7 = uVar5 & 0xff;
        goto joined_r0x0001408c87d5;
      }
      if ((uVar5 & 0xff0000) == 0) {
        *puVar7 = uVar5 & 0xffff;
        goto joined_r0x0001408c87d5;
      }
      if ((uVar5 & 0xff000000) == 0) {
        *puVar7 = uVar5;
        goto joined_r0x0001408c87d5;
      }
    }
    *puVar7 = uVar5;
    puVar7 = (uint *)(ulonglong)(iVar6 + 4);
    uVar2 = uVar2 - 1;
joined_r0x0001408c871c:
    if (uVar2 == 0) goto LAB_1408c871e;
    goto LAB_1408c877f;
  }
  goto LAB_1408c8723;
joined_r0x0001408c8744:
  do {
    if ((uVar5 & 3) == 0) {
      uVar2 = local_resc >> 2;
      cVar1 = '\0';
      if (uVar2 == 0) goto LAB_1408c8763;
      goto LAB_1408c87d9;
    }
    *(char *)puVar7 = '\0';
    uVar5 = (int)puVar7 + 1;
    puVar7 = (uint *)(ulonglong)uVar5;
    local_resc = local_resc - 1;
  } while (local_resc != 0);
LAB_1408c87ec:
  return unaff_RDI & 0xffffffff;
LAB_1408c8768:
  while (local_resc = local_resc - 1, local_resc != 0) {
LAB_1408c8763:
    *(char *)puVar7 = cVar1;
    puVar7 = (uint *)(ulonglong)((int)puVar7 + 1);
  }
LAB_1408c876f:
  return (ulonglong)unaff_retaddr;
LAB_1408c871e:
  local_resc = local_resc & 3;
  if (local_resc == 0) goto LAB_1408c8736;
LAB_1408c8723:
  do {
    cVar1 = (char)*puVar4;
    puVar4 = (uint *)(ulonglong)((int)puVar4 + 1);
    *(char *)puVar7 = cVar1;
    puVar7 = (uint *)(ulonglong)((int)puVar7 + 1);
    if (cVar1 == '\0') goto LAB_1408c8768;
    local_resc = local_resc - 1;
  } while (local_resc != 0);
LAB_1408c8736:
  return unaff_RDI & 0xffffffff;
}

