/***************************************************************************
                              qgsserverprojectutils.h
                              -----------------------
  begin                : December 19, 2016
  copyright            : (C) 2016 by Paul Blottiere
  email                : paul dot blottiere at oslandia dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSSERVERPROJECTUTILS_H
#define QGSSERVERPROJECTUTILS_H

#include "qgis_server.h"
#include "qgsproject.h"

#ifdef SIP_RUN
% ModuleHeaderCode
#include "qgsserverprojectutils.h"
% End
#endif


/**
 * \ingroup server
 * The QgsServerProjectUtils namespace provides a way to retrieve specific
 * entries from a QgsProject.
 * \since QGIS 3.0
 */
namespace QgsServerProjectUtils
{

  /**
   * Returns if owsService capabilities are enabled.
    * \param project the QGIS project
    * \returns if owsService capabilities are enabled.
    */
  SERVER_EXPORT bool owsServiceCapabilities( const QgsProject &project );

  /**
   * Returns the owsService title defined in project.
    * \param project the QGIS project
    * \returns the owsService title if defined in project.
    */
  SERVER_EXPORT QString owsServiceTitle( const QgsProject &project );

  /**
   * Returns the owsService abstract defined in project.
    * \param project the QGIS project
    * \returns the owsService abstract if defined in project.
    */
  SERVER_EXPORT QString owsServiceAbstract( const QgsProject &project );

  /**
   * Returns the owsService keywords defined in project.
    * \param project the QGIS project
    * \returns the owsService keywords if defined in project.
    */
  SERVER_EXPORT QStringList owsServiceKeywords( const QgsProject &project );

  /**
   * Returns the owsService online resource defined in project.
    * \param project the QGIS project
    * \returns the owsService online resource if defined in project.
    */
  SERVER_EXPORT QString owsServiceOnlineResource( const QgsProject &project );

  /**
   * Returns the owsService contact organization defined in project.
    * \param project the QGIS project
    * \returns the owsService contact organization if defined in project.
    */
  SERVER_EXPORT QString owsServiceContactOrganization( const QgsProject &project );

  /**
   * Returns the owsService contact position defined in project.
    * \param project the QGIS project
    * \returns the owsService contact position if defined in project.
    */
  SERVER_EXPORT QString owsServiceContactPosition( const QgsProject &project );

  /**
   * Returns the owsService contact person defined in project.
    * \param project the QGIS project
    * \returns the owsService contact person if defined in project.
    */
  SERVER_EXPORT QString owsServiceContactPerson( const QgsProject &project );

  /**
   * Returns the owsService contact mail defined in project.
    * \param project the QGIS project
    * \returns the owsService contact mail if defined in project.
    */
  SERVER_EXPORT QString owsServiceContactMail( const QgsProject &project );

  /**
   * Returns the owsService contact phone defined in project.
    * \param project the QGIS project
    * \returns the owsService contact phone if defined in project.
    */
  SERVER_EXPORT QString owsServiceContactPhone( const QgsProject &project );

  /**
   * Returns the owsService fees defined in project.
    * \param project the QGIS project
    * \returns the owsService fees if defined in project.
    */
  SERVER_EXPORT QString owsServiceFees( const QgsProject &project );

  /**
   * Returns the owsService access constraints defined in project.
    * \param project the QGIS project
    * \returns the owsService access constraints if defined in project.
    */
  SERVER_EXPORT QString owsServiceAccessConstraints( const QgsProject &project );

  /**
   * Returns the maximum width for WMS images defined in a QGIS project.
    * \param project the QGIS project
    * \returns width if defined in project, -1 otherwise.
    */
  SERVER_EXPORT int wmsMaxWidth( const QgsProject &project );

  /**
   * Returns the maximum height for WMS images defined in a QGIS project.
    * \param project the QGIS project
    * \returns height if defined in project, -1 otherwise.
    */
  SERVER_EXPORT int wmsMaxHeight( const QgsProject &project );

  /**
   * Returns the quality for WMS images defined in a QGIS project.
    * \param project the QGIS project
    * \returns quality if defined in project, -1 otherwise.
    */
  SERVER_EXPORT int wmsImageQuality( const QgsProject &project );

  /**
   * Returns if layer ids are used as name in WMS.
    * \param project the QGIS project
    * \returns if layer ids are used as name.
    */
  SERVER_EXPORT bool wmsUseLayerIds( const QgsProject &project );

  /**
   * Returns if the info format is SIA20145.
    * \param project the QGIS project
    * \returns if the info format is SIA20145.
    */
  SERVER_EXPORT bool wmsInfoFormatSia2045( const QgsProject &project );

  /**
   * Returns if the geometry is displayed as Well Known Text in GetFeatureInfo request.
    * \param project the QGIS project
    * \returns if the geometry is displayed as Well Known Text in GetFeatureInfo request.
    */
  SERVER_EXPORT bool wmsFeatureInfoAddWktGeometry( const QgsProject &project );

  /**
   * Returns if the geometry has to be segmentize in GetFeatureInfo request.
    * \param project the QGIS project
    * \returns if the geometry has to be segmentize in GetFeatureInfo request.
    */
  SERVER_EXPORT bool wmsFeatureInfoSegmentizeWktGeometry( const QgsProject &project );

  /**
   * Returns the geometry precision for GetFeatureInfo request.
    * \param project the QGIS project
    * \returns the geometry precision for GetFeatureInfo request.
    */
  SERVER_EXPORT int wmsFeatureInfoPrecision( const QgsProject &project );

  /**
   * Returns the document element name for XML GetFeatureInfo request.
    * \param project the QGIS project
    * \returns the document element name for XML GetFeatureInfo request.
    */
  SERVER_EXPORT QString wmsFeatureInfoDocumentElement( const QgsProject &project );

  /**
   * Returns the document element namespace for XML GetFeatureInfo request.
    * \param project the QGIS project
    * \returns the document element namespace for XML GetFeatureInfo request.
    */
  SERVER_EXPORT QString wmsFeatureInfoDocumentElementNs( const QgsProject &project );

  /**
   * Returns the schema URL for XML GetFeatureInfo request.
    * \param project the QGIS project
    * \returns the schema URL for XML GetFeatureInfo request.
    */
  SERVER_EXPORT QString wmsFeatureInfoSchema( const QgsProject &project );

  /**
   * Returns the mapping between layer name and wms layer name for GetFeatureInfo request.
    * \param project the QGIS project
    * \returns the mapping between layer name and wms layer name for GetFeatureInfo request.
    */
  SERVER_EXPORT QHash<QString, QString> wmsFeatureInfoLayerAliasMap( const QgsProject &project );

  /**
   * Returns if Inspire is activated.
    * \param project the QGIS project
    * \returns if Inspire is activated.
    */
  SERVER_EXPORT bool wmsInspireActivate( const QgsProject &project );

  /**
   * Returns the Inspire language.
    * \param project the QGIS project
    * \returns the Inspire language if defined in project.
    */
  SERVER_EXPORT QString wmsInspireLanguage( const QgsProject &project );

  /**
   * Returns the Inspire metadata URL.
    * \param project the QGIS project
    * \returns the Inspire metadata URL if defined in project.
    */
  SERVER_EXPORT QString wmsInspireMetadataUrl( const QgsProject &project );

  /**
   * Returns the Inspire metadata URL type.
    * \param project the QGIS project
    * \returns the Inspire metadata URL type if defined in project.
    */
  SERVER_EXPORT QString wmsInspireMetadataUrlType( const QgsProject &project );

  /**
   * Returns the Inspire temporal reference.
    * \param project the QGIS project
    * \returns the Inspire temporal reference if defined in project.
    */
  SERVER_EXPORT QString wmsInspireTemporalReference( const QgsProject &project );

  /**
   * Returns the Inspire metadata date.
    * \param project the QGIS project
    * \returns the Inspire metadata date if defined in project.
    */
  SERVER_EXPORT QString wmsInspireMetadataDate( const QgsProject &project );

  /**
   * Returns the restricted composer list.
    * \param project the QGIS project
    * \returns the restricted composer list if defined in project.
    */
  SERVER_EXPORT QStringList wmsRestrictedComposers( const QgsProject &project );

  /**
   * Returns the WMS service url defined in a QGIS project.
    * \param project the QGIS project
    * \returns url if defined in project, an empty string otherwise.
    */
  SERVER_EXPORT QString wmsServiceUrl( const QgsProject &project );

  /**
   * Returns the WMS root layer name defined in a QGIS project.
    * \param project the QGIS project
    * \returns root layer name if defined in project, an empty string otherwise.
    */
  SERVER_EXPORT QString wmsRootName( const QgsProject &project );

  /**
   * Returns the restricted layer name list.
    * \param project the QGIS project
    * \returns the restricted layer name list if defined in project.
    */
  SERVER_EXPORT QStringList wmsRestrictedLayers( const QgsProject &project );

  /**
   * Returns the WMS output CRS list.
    * \param project the QGIS project
    * \returns the WMS output CRS list.
    */
  SERVER_EXPORT QStringList wmsOutputCrsList( const QgsProject &project );

  /**
   * Returns the WMS Extent restriction.
    * \param project the QGIS project
    * \returns the WMS Extent restriction.
    */
  SERVER_EXPORT  QgsRectangle wmsExtent( const QgsProject &project );

  /**
   * Returns the WFS service url defined in a QGIS project.
    * \param project the QGIS project
    * \returns url if defined in project, an empty string otherwise.
    */
  SERVER_EXPORT QString wfsServiceUrl( const QgsProject &project );

  /**
   * Returns the Layer ids list defined in a QGIS project as published in WFS.
    * \param project the QGIS project
    * \return the Layer ids list.
    */
  SERVER_EXPORT QStringList wfsLayerIds( const QgsProject &project );

  /**
   * Returns the Layer precision defined in a QGIS project for the WFS GetFeature.
    * \param project the QGIS project
    * \param layerId the layer id in the project
    * \return the layer precision for WFS GetFeature.
    */

  SERVER_EXPORT  int wfsLayerPrecision( const QgsProject &project, const QString &layerId );

  /**
   * Returns the Layer ids list defined in a QGIS project as published as WFS-T with update capabilities.
    * \param project the QGIS project
    * \return the Layer ids list.
    */
  SERVER_EXPORT QStringList wfstUpdateLayerIds( const QgsProject &project );

  /**
   * Returns the Layer ids list defined in a QGIS project as published as WFS-T with insert capabilities.
    * \param project the QGIS project
    * \return the Layer ids list.
    */
  SERVER_EXPORT QStringList wfstInsertLayerIds( const QgsProject &project );

  /**
   * Returns the Layer ids list defined in a QGIS project as published as WFS-T with delete capabilities.
    * \param project the QGIS project
    * \return the Layer ids list.
    */
  SERVER_EXPORT QStringList wfstDeleteLayerIds( const QgsProject &project );

  /**
   * Returns the WCS service url defined in a QGIS project.
    * \param project the QGIS project
    * \returns url if defined in project, an empty string otherwise.
    */
  SERVER_EXPORT QString wcsServiceUrl( const QgsProject &project );

  /**
   * Returns the Layer ids list defined in a QGIS project as published in WCS.
    * \param project the QGIS project
    * \returns the Layer ids list.
    */
  SERVER_EXPORT QStringList wcsLayerIds( const QgsProject &project );
};

#endif
