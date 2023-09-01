---
marp: true

# Meta
author: "Shaun Broomfield"
title: "Support Tracker"
description: "Teesside University Software Development Work-Based Project"
theme: rose-pine-moon

# Title Slide
_header: "![height:75px left](resources/images/tascomp/Tascomp%20Profile.jpeg)"
_footer: "**Shaun Broomfield** *<C2518141>* **|** **Teesside University** *<CIS1054-N-JA2-2022>*" 
_paginate: false

# Rest of the Slides
header: "" 
footer: ""
paginate: true

#Inline Style Overrides
style: | 
 
  img[alt~="center"] {
      display: block;
      margin: 0 auto;
  }

  .circular_image img {
      border-radius: 50%;
      overflow: hidden;
  }

  .rounded_image img {
      border-radius: 30%;
      overflow: hidden;
      border: 6px solid var(--text);
  }

  .fa-window-maximize {
      color: skyblue;
  }

  svg[id^="mermaid-"] {
      min-width: 480px;
      max-width: 960px;
      min-height: 360px;
      max-height: 600px;
  }

  img {
      background-color: initial;
  }

  .columns {
      display: grid;
      grid-template-columns: repeat(2, minmax(0, 1fr));
      gap: 1rem;
  }

  .columns3 {
      display: grid;
      grid-template-columns: repeat(3, minmax(0, 1fr));
      gap: 1rem;
  }

  .rows {
      display: grid;
      grid-template-rows: repeat(2, minmax(0, 1fr));
      gap: 1rem;
  }

  .rows3 {
      display: grid;
      grid-template-rows: repeat(3, minmax(0, 1fr));
      gap: 1rem;
  }

  /* Base styles for the table */
  table {
      font-size: 13px;
      width: 100%;
      height: 100%;
      border-collapse: collapse;
      margin: 20px 0;
      border: none;
      /* This ensures the table itself has no borders */
  }

  table,
  table th,
  table td {
      background-color: var(--base);
      color: var(--text);
      border-color: var(--rose);
  }

  table th {
    font-weight: bold;
    border-top: 1px solid var(--base);
    border-bottom: 3px solid var(--rose);
  }

  /* Remove border from the last row */
  table tr:last-child td {
      border-bottom: none;
  }

  /* This targets the first th and td of each row to ensure there's no left border */
  table th:first-child, 
  table td:first-child {
      border-left: none;
      border-right: 3px solid var(--rose);
  }

  /* This targets the last th and td of each row to ensure there's no right border */
  table th:last-child, 
  table td:last-child {
      border-right: none;
  }

  .smaller-text > blockquote {
    font-size: 0.5em;  /* Adjust this value as needed */
  }

  @import 'https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.3.0/css/all.min.css'
---

<!-- Links -->
[proposal-doc-link]: <resources/files/proposalDoc.pdf>
[design-doc-link]: <resources/files/designDoc.pdf>
[user-guide-link]: <resources/files/userGuideDoc.pdf>
[test-doc-link]: <resources/files/testDoc.xlsx>

<!-- Page{0} Front -->

# Support Tracker

Software Development Work-Based Project

![bg height:300px right](resources/images/vector%20illustrations/customer-support-2.svg)

<!-- 
Script: 
 - Wait for start
 - Don't say anything, just wait for a few seconds for them to read
 - Move to next slide
 -->

---

<!-- Slides[0.1] Greetings -->
<!-- class: invert -->

![height:250px](resources/slides/titles/hello!.svg)

## Welcome to my presentation

![bg right:40%](<resources/images/memes/hello groot.gif>)

<!-- 
Script: 
 - Say "Hello"
 - Welcome everyone to the presentation
 - Move to next slide
 -->

---

<!-- Slides[0.2] Who am I? -->

![bg height:250px](resources/slides/titles/Who%20am%20I%20.svg)

<!-- 
Script: 
 - Introduce the introduction...
 - Ask "Who am I?"
 - Move to next slide
 -->

---

<!-- Slides[1] Me, Myself, Irene? -->
<!--  -->

<!-- class: invert -->

![bg left:40%](<resources/images/portrait/casual - grayscale.jpg>)

## Shaun Broomfield

### Software Engineer

<i class="fa-brands fa-linkedin"></i> [ShaunBroomfield](https://www.linkedin.com/in/shaunbroomfield)

<i class="fas fa-globe"></i> [shaunbroomfield.com](https://shaunbroomfield.com/)

<i class="fa-brands fa-github"></i> [Broomfields](https://github.com/Broomfields)

<br>

> I write code and stuff!

<!-- 
Script: 
 - Introduce myself
 - Move to next slide
 -->

---

<!-- Slides[1.1} Who do I work for?  -->

![bg height:250px](resources/slides/titles/Whom%20do%20I%20work%20for.svg)

<!-- 
Script: 
 - Ask the question...
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[2] Tascomp -->

<!-- _header: "![height:220px](resources/images/tascomp/Banner%203.png)" -->

<!-- ## Tascomp Limited -->

<p style="margin-top:200px">
Tascomp are the developers of the Prodigy HMI SCADA software package for industrial monitoring, control, and automation.

Since our establishment in 1981, we have been committed to delivering and improving upon industrial automation and monitoring in a wide range of fields.
</p>

### Products

<div style="width:50%" class="columns3">

  <div class = "rounded_image">

  ![height:100px](<resources/images/tascomp/Prodigy Profile.jpeg>)

  </div>

  <div class = "rounded_image">

  ![height:100px](<resources/images/tascomp/PlantRun Profile.jpeg>)

  </div>

  <div class = "rounded_image">

  ![height:100px](<resources/images/tascomp/PAMS Profile.jpeg>)

  </div>

</div>

<!-- 
Script: 
 - Introduce Tascomp
 - Provide a general overview
 - Move to next slide
 -->

---

<!-- Slides[2.1} What do we create?  -->

![bg height:250px](resources/slides/titles/What%20do%20we%20create.svg)

<!-- 
Script: 
 - Ask the question...
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[2.2] Prodigy -->

## Prodigy

<div class="columns">
<div style="width:700px">

Prodigy stands as a leading industrial automation software, widely adopted across diverse sectors worldwide.

Rooted in 40 years of systems integration experience, it excels in extracting vital data and transforming it into actionable insights, ensuring seamless and efficient operations.

Its unmatched versatility and comprehensive feature set enable users to address complex automation challenges without requiring additional customisations.

</div>
<div style="margin-left:200px;width:400px;float:right;">

![height:500px](resources/images/vector%20illustrations/optimization-process.svg)

</div>

</div>

<!-- 
Script: 
 - Provide an overview on Prodigy:
 - > What is it?
 - > What is its purpose?
 - > What is its composition?
 - Move to next slide
 -->

---

<!-- Slides[2.3] PlantRun -->

## PlantRun

<div class="columns">
<div style="width:700px">

Emerging from the robust framework of Prodigy, PlantRun refines the essence of Shop Floor Data Collection, mastering the art of automating real-time data collection and channelling it into actionable intelligence.

Beyond mere enhancement, it represents a paradigm shift in productivity and operational efficiency, all while championing lean manufacturing.

Merging intuitive design with sophisticated analytics, PlantRun delineates the future trajectory of evolved manufacturing.

</div>
<div style="margin-left:200px;width:400px;float:right;">

![height:500px](resources/images/vector%20illustrations/MACHIN~1.svg)

</div>

</div>

<!-- 
Script: 
 - Provide an overview on PlantRun:
 - > What is it?
 - > What is its purpose?
 - > What is its composition?
 - Move to next slide
 -->

---

<!-- Slides[2.4] PAMS -->

## PAMS

<div class="columns">
<div style="width:700px">

PAMS, birthed in 2003, is the adaptive evolution of the Prodigy product, purpose-built for precise alarm management in airport ground systems, notably ATC and CNS.

Its vast deployment throughout the UK's civil and military landscapes underscores its proficiency, as it harmoniously melds an intuitive touchscreen interface with a decisive move away from archaic manual alarm techniques.

</div>
<div style="margin-left:200px;width:400px;float:right;">

![height:500px](resources/images/vector%20illustrations/Aircraft-amico.svg)

</div>

</div>

<!-- 
Script: 
 - Provide an overview on PAMS:
 - > What is it?
 - > What is its purpose?
 - > What is its composition?
 - Move to next slide
 -->

---

<!-- Slides[2.5} What is my Project?  -->

![bg height:250px](<resources/slides/titles/What%20is%20my%20project.svg>)

<!-- 
Script: 
 - Ask the question...
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[3] Support Tracker -->

<!-- class: lead -->
<!-- _header: "![height:75px left](resources/images/tascomp/Tascomp%20Profile.jpeg)" -->

<div align="center">

![height:200px](<resources/slides/titles/Support%20Tracker.svg>)

Tascomp’s answer to the growing demand for a specialised and efficient
internal support ticketing solution.

</div>

<!-- 
Script: 
 - Introduce the project by name "Support Tracker"
 - Wait a second
 - State that it is a ticketing system.
 - Move to next slide
 -->

---

<!-- Slides[3.1] Project Introduction -->

## Introduction

Support Tracker will be an internal tool used by Tascomp to effectively manage and track customer inquiries, technical issues, and support requests. The overarching aim is to streamline communication, thus expediting the resolution time for reported issues.

Initiated in July 2023, the project is a graded ICA to be performed as a work-project at Tascomp and to be graded as part of the Software Engineer Degree-Apprenticeship course at Teesside University.

<!-- 
Script: 
 - Read aloud the description
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[3.2] Project Value -->

## Project Value

The project holds significant value to Tascomp as it will significantly enhance our existing support processes, benefitting both Tascomp and its customers.

With a key revenue stream coming from support contracts with users of our Prodigy, PlantRun, and PAMS systems, it is imperative that we provide an efficient, user-friendly system for handling support issues.

Moreover, some of our clients, especially those affiliated with government agencies, necessitate distinct support ticket IDs, further emphasizing the importance of this project.

<!-- 
Script: 
 - Read aloud the description:
    The project holds significant value to Tascomp as it will significantly enhance our existing support processes, benefitting both Tascomp and its customers.

    With a key revenue stream coming from support contracts with users of our Prodigy, PlantRun, and PAMS systems, it is imperative that we provide an efficient, user-friendly system for handling support issues.

    Moreover, some of our clients, especially those affiliated with government agencies, necessitate distinct support ticket IDs, further emphasizing the importance of this project.

 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[3.3] Reason for Development -->

## Reason for Development

The primary motivation for developing Support Tracker is to overcome the limitations of our current system, which was not initially designed for logging and tracking support events and interactions, thus rendering it unwieldy when used as a ticketing system.

Its design was primarily for managing other operational aspects of support contracts, and therefore lacks efficiency and ease-of-use when deployed as a ticketing system. This project was hence initiated to create a new, dedicated ticketing system, specifically designed to handle customer inquiries, technical issues, and support requests effectively and efficiently.

<!-- 
Script: 
 - Read aloud the description:
    The primary motivation for developing Support Tracker is to overcome the limitations of our current system, which was not initially designed for logging and tracking support events and interactions, thus rendering it unwieldy when used as a ticketing system.

Its design was primarily for managing other operational aspects of support contracts, and therefore lacks efficiency and ease-of-use when deployed as a ticketing system. This project was hence initiated to create a new, dedicated ticketing system, specifically designed to handle customer inquiries, technical issues, and support requests effectively and efficiently.

 - Wait a second
 - Move to next slide
-->
  
---

<!-- Slides[3.4] Stakeholders -->

## Stakeholders

<div style="margin-top:-1em">

 | Stakeholders           | Stake                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
 | ---------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
 | Senior Leadership Team | - Increased operational efficiency by reducing support ticket resolution time.<br>- Improved cost-effectiveness through optimized resource allocation.<br>- Enhanced decision-making based on real-time data and analytics.<br>- Ability to meet additional certifications and industry standards due to the enhanced auditing processes facilitated by the streamlined support ticketing system.<br>- Access to a wider range of higher quality and profitable contracts as a result of improved compliance and traceability.              |
 | Applications Team      | - Decreased response time for resolving software-related issues.<br>- Streamlined communication channels for efficient collaboration and knowledge sharing.<br>- Improved productivity by reducing the time spent on manual ticket management tasks.                                                                                                                                                                                                                                                                                        |
 | Software Team          | - Decreased response time for resolving software-related issues.<br>- Streamlined communication channels for efficient collaboration and knowledge sharing.<br>- Improved productivity by reducing the time spent on manual ticket management tasks.                                                                                                                                                                                                                                                                                        |
 | Hardware Team          | - Reduced downtime by quickly identifying and resolving hardware-related issues.<br>- Streamlined coordination with other teams for faster problem resolution.<br>- Improved resource utilization through better tracking and prioritization of hardware support requests.<br>- Simplified and standardised Return Merchandise Authorization (RMA) process through the provision of Ticket or Ticket Event GUIDs.<br>- Enhanced customer satisfaction by offering a seamless RMA experience for those that require it in their own systems. |
 | Supported Customers    | - Faster response and resolution times for their support tickets.<br>- Enhanced customer experience through improved communication and transparency.<br>- Increased satisfaction due to a streamlined and efficient support process.<br>- Integration capability with their internal systems by logging and tracking support events using the provided Ticket and Event GUIDs as a form of RMA.                                                                                                                                             |

</div>
<!-- 
Script: 
 - Explain who the stakeholders are
 - Wait a second
 - Move to next slide
-->
  
---

<!-- Slides[3.5] Quantitative Incentives -->

## Quantitative Incentives

 | Incentive                      | Reasoning                                                                                                                                                                                                                                                                                                                               |
 | ------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
 | Enhanced Efficiency            | The new streamlined internal support ticketing system will significantly improve operational efficiency by reducing response times and minimising manual processes, leading to increased productivity and time savings for the senior leadership team.                                                                                  |
 | Cost Savings                   | The implementation of the new system will result in cost savings by reducing the need for dedicated support staff, streamlining workflows, and minimizing errors. These savings can be reinvested in other areas of the company or allocated to strategic initiatives.                                                                  |
 | Data-Driven Insights           | The system generates valuable data and metrics on support tickets, allowing senior leadership to identify trends, areas for improvement, and potential training needs. This data-driven approach enables informed decision-making and more effective resource allocation.                                                               |
 | Risk Mitigation                | By implementing a centralised support ticketing system, the company can reduce the risk of lost or misplaced tickets, ensuring that no customer requests or critical issues fall through the cracks. This mitigates potential reputational risks and customer dissatisfaction.                                                          |
 | Enhanced Customer Experience   | The efficient handling of support tickets will result in faster issue resolution for customers, leading to increased customer satisfaction and loyalty. This positive customer experience can have a direct impact on the company’s reputation and bottom line.                                                                         |
 | Compliance and Accountability  | The streamlined system will enable better tracking and monitoring of support ticket status, ensuring accountability and compliance with service level agreements (SLAs) and other performance metrics. This will help the senior leadership team in maintaining high standards of customer service and meeting regulatory requirements. |
 | Improved Decision Making       | The system’s potential for comprehensive reporting and analytics capabilities will provide all teams with different sets of historical and real-time data and insights on support ticket trends, allowing for informed decision making and proactive problem-solving.                                                                   |
 | Enhanced Auditing Capabilities | The incorporation of robust auditing features within the ticketing system will enable the organization to meet new certifications, standards, and compliance, enhancing its ability to bid for more advantageous contracts with customers that require such things.                                                                     |

<!-- 
Script: 
 - Explain the incentives
 - Wait a second
 - Move to next slide
-->
  
---

<!-- Slides[3.6] Deliverables -->

## Deliverables

- Back-End
  - An Microsoft SQL Server Database to store support tickets.
  - Reading from external internal-tool databases to connect with internal tools.
- Front-End
  - A method of `viewing/filtering/sorting` a list of all tickets.
  - A method of `viewing/creating/editing/removing` an individual ticket and its events.
  - A method of `viewing/creating/editing/removing` an individual ticket's event.

<!-- 
Script: 
 - List the deliverables
 - Wait a second
 - Move to next slide
-->
  
---

<!-- Slides[3.7] Consideration of Costing -->

## Consideration of Costing

<div class="columns">
<div style="width:700px">

| Consideration Category   | Specific Items & Descriptions                                                                                             |
| ------------------------ | ------------------------------------------------------------------------------------------------------------------------- |
| Labour Costs             | - Developer salary<br>- Managerial oversight & meetings<br>- Quality assurance                                            |
| Infrastructure Costs     | - Hosting on an internal Windows server<br>- Office space & utilities                                                     |
| Software Licences        | - Development tools & platforms (including annual Microsoft partners program fee)<br>- Other third-party libraries & APIs |
| Training & Documentation | - Demonstration meeting for user training<br>- Design Document, User Guide, Acceptance Testing Document                   |
| Maintenance & Support    | - Bug fixes<br>- Ongoing enhancements<br>- User support                                                                   |
| Contingency Funds        | - Unforeseen challenges & scope changes                                                                                   |

</div>
<div style="margin-left:250px;margin-top:75px;float:right;">

![width:300px](resources/images/vector%20illustrations/Coins-bro.svg)

</div>

</div>

> *Note: Actual costs will vary based on specifics of the system and project requirements.*

<!-- 
Script: 
 - Mention stuff to consider
 - Wait a second
 - Move to next slide
-->
  
---

## Ethical Considerations and Compliance

A key constraint we must keep in mind during the development of our ticketing system is the need to follow ethical guidelines and relevant regulations. Being based in the UK, there are particular ethical factors we must take into account:

| Point | Description |
| --- | --- |
| Data Protection and Privacy | Considering that the ticketing system will likely handle sensitive and personal data pertaining to customers, their site systems, and their support interactions, it is of utmost importance that we adhere to the regulations set forth by the General Data Protection Regulation (GDPR) and any other relevant data protection laws applicable in the UK. This ensures the proper safeguarding of customer’s privacy and data integrity. |
| Equitable and Unbiased Treatment | We must design and implement our ticketing system to promote equity and prevent any form of discrimination. Any algorithms or decision-making processes used within the system need to be transparent, explainable, and free from biases linked to race, gender, age, or any other protected characteristic. |
| Confidentiality and Security | Safeguarding the confidentiality and security of data within the ticketing system holds paramount importance. To mitigate the risks of data leaks and potential breaches of Non-Disclosure Agreements (NDAs), a crucial step is to employ encryption techniques to protect the database. |
| Accessibility and Inclusivity | It's crucial that we design and develop our ticketing system with accessibility in mind, making sure it's usable by people with disabilities. We need to think about offering alternative means of access for users with varying abilities or needs. |

---

<!-- Slides[3.8] Management -->

## Project Management

For software development, project management exists in a limited capacity.
Currently it is almost entirely performed through weekly software meetings and the use of an internal tool named Mantis.

These meetings serve as a platform for the software team to discuss and evaluate the status of the previous week's deliverables.

Once evaluated, developers propose tasks for the upcoming week, informing their colleagues and the product owner about their intended tasks. For each prospective task, the importance, priority, and necessity are discussed and negotiated.

Although our development processes largely follow a traditional route, the recent introducution of these weekly software meetings bear a resemblance to the sprint-scrum style of agile development, contributing to agile-like elements for our project management.

<!-- 
Script: 
 - Tell them about the management process
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[3.9] Proposal Reference -->

## Proposal Reference

For a more comprehensive understanding of the project and the justifications for its development, please refer to the Proposal document:

[<img src="resources/images/microsoft/Word.png" width="35px"> Project Proposal Document][proposal-doc-link]

<!-- 
Script: 
 - Tell them about the document
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[4.0} Development Process  -->

![bg height:250px](<resources/slides/titles/Development Process.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[4.1} Development Methodology  -->

## Development Methodology

<div class="columns">
<div style="width:700px">

Our team uses... I don't really know what Development Methodology we use... Its kind of a mix of a bunch of things, mostly traditional, but the programming section of the development process is gaining more and more agile aspects as time goes on.

</div>
<div style="margin-left:200px;width:400px;float:right;">

Here's a simplified overview of our process in phases:

- Design
- Development
- Testing
- Deployment
- Maintenance

</div>

</div>

---

<!-- Slides[4.2} Development Methodology  -->

## Development Process Flow

<div style="width:100%; height:100%" class="columns3">

  <div>

  ![height:550px](<resources/images/company development flow/Dev Process Flow 1.png>)

  </div>

  <div>

  ![height:550px](<resources/images/company development flow/Dev Process Flow 2.png>)

  </div>

  <div>

  ![height:550px](<resources/images/company development flow/Dev Process Flow 3.png>)

  </div>

</div>

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[4.3} Development Methodology  -->

## Mantis

<div style="width:100%; height:100%" class="columns">

  <div>

  As seen in the development process flow-chart, every new code addition, be it a new or existing project, requires a Mantis entry.

  Mantis is an internal tool developed and utilised by the company to track all code development, speficially tracking code changes against Prodigy builds.

  ![height:200px](<resources/images/mantis/A Mantis.png>)

  </div>

  <div>

  <div style="width:100%" class="rows">
  
  <div style="width:100%; height:100%" class="columns">

  <div>

  ![height:300px; width:100%](<resources/images/mantis/Mantis.png>)

  </div>

  <div>

  ![height:300px; width:100%](<resources/images/mantis/Mantis 2.png>)

  </div>

  </div>

  <div>

  ![height:200px](<resources/images/mantis/Mantis 3.png>)

  </div>

</div>

<!-- 
Script: 
 - Explain what Mantis is
 - Move to next slide
 -->

---

<!-- Slides[4.4] Design Document Reference -->

## Design Document

For every new code project, a design document is created and approved.

The following design document provides a detailed and comprehensive understanding of the project and its design:

[<img src="resources/images/microsoft/Word.png" width="35px"> Support Tracker Design Document][design-doc-link]

<!-- 
Script: 
 - Tell them about the document
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[5.0} Technology Stack  -->

![bg height:250px](<resources/slides/titles/Technology Stack.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[5.1] Development Platform -->

## Development Platform

- Long before the current era of developing for `Windows`, Tascomp utilised an ancient technology knows as `OS9`, this was a real-time operating system.
- Eventually, once Windows had become more stable, Tascomp migrated its `C` codebase to be developed for the platform.
- Tascomp's code-base for `Prodigy`, its derived variants, and Tascomp's orbiting components, such as `Support Tracker`, are all developed for the Windows platform, targeting Windows 10 and 11.

<!-- 
Script: 
 - Tell them about the development platform.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[5.2] Languages and Frameworks -->

## Languages and Frameworks

- At our code-base's heart is `C`, forming the backbone of our libraries, programs, and essential services.
- Our `C++` layer has expansive reach, originating with `Win32` back-end and over time moving to `MFC` for both back-end and front-end.
- `C++/CLI`'s merger with `Windows Forms` marks our tech evolution, drawing on `.NET Framework 4` to redefine our front-end prowess and library offerings.
- `Support Tracker` embodies adaptability, centring on `C++/CLI`, but based in `MFC` to synergise with specific Tascomp libraries.
- Navigating the legacy tapestry and tooling constraints, notably utilising a long deprecated source control solution as well as having to cater for `Visual Studio Platform v100`, necessitates that we cannot use anything later than `.NET Framework 4`.

<!-- 
Script: 
 - Tell them about the codebase.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[5.3] Source Control -->

## Source Control

- We employ `Microsoft Visual SourceSafe 6` as our primary version control system, utilising its centralised source-control solution, though bypassing its branching capabilities.
- Virtualisation aids our process; each major product version, with an example being Prodigy version 11, resides in its dedicated virtual machine, like Build Machine 11's SourceSafe database.
- To navigate builds and variants, we interweave batch scripts and our proprietary solutions, enabling streamlined management of build types, including Beta and Release.

<div class="smaller-text">

> It is important to note that utilising Sourcesafe as our source-control solution blocks us from using any visual studio platform later than `v142` and so blocks us from using any version of .NET later than `.NET Framework v4.8`. Git would be the most logical next-step in the future.

</div>

<!-- 
Script: 
 - Tell them about the source control.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[5.4] Databases -->

## Databases

- Tascomp's core products stand on the foundation of our unique, internal proprietary database technologies. These are largely hidden as to users and managed by back-end components which communicate with fron-end components.
- Our product layers extend support to three primary databases: `Microsoft Access`, `Microsoft SQL Server`, and `Oracle`.
- Historically, `Microsoft Access` was our preferred choice, but recent inclinations lean heavily towards `Microsoft SQL Server`.
- All internal tools, once rooted in `Microsoft Access`, have transitioned to `Microsoft SQL Server`, consolidating in the shared server `TSC-Server`, the same repository designated for the Support Tracker's database.

<!-- 
Script: 
 - Tell them about the databases.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[5.5] Development Environments -->

## Development Environments

- `Visual Studio 2010` is the primary IDE across Tascomp's software division. However, certain developers, including myself, and all our build machines are equipped with `Visual Studio 2019` to tap into platform `v142` and `.NET Framework v4.8` capabilities.
- Our internal toolkit is vast and varied. From handling our exclusive domain language `SLANG` to meticulous program, queue, and data-module diagnostics, these tools embody diverse roles, ensuring an optimised development environment.
- Personally, an array of Microsoft utilities, like `Visual Studio Code`, `Windows Terminal`, `WSL2`, and `SysInternal Suite`, are indispensable, aiding in a streamlined development experience.

<!-- 
Script: 
 - Tell them about the development environments.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[6} Development Conventions, Standards, and Styles -->

![bg height:250px](<resources/slides/titles/Coding Standards.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[6.1] Standards Overview -->

## Standards Overview

Due to us heavily relying on Microsoft technologies for our Windows-based C++ applications. We use Microsoft's style guide for each respective technology in our project.

<div style="width:30%" class="columns3">

  <div>

  ![height:50px](resources/images/icons/c.png)

  </div>
  
  <div>

  ![height:50px](resources/images/icons/c++.png)

  </div>

  <div>

  ![height:50px](resources/images/icons/Windows.png)

  </div>

</div>

<!-- 
Script: 
 - Provide an overview of the programming standards.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[6.2] C++ with Win32 and MFC -->

## C++ with Win32 and MFC

- Hungarian Notation Naming Conventions
- Function and Class Commenting
- Bracing (Which Line?)
- Exception and Error Handling
- Function and Class Coherence
- Guard Statements

[Official Microsoft Documentation](https://learn.microsoft.com/en-us/windows/win32/stg/coding-style-conventions)

<!-- 
Script: 
 - ToDo.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[6.3] C++/CLI -->

## C++/CLi

- Name Casing
- Descriptive Naming
- Function and Class Commenting
- Bracing (New Line)
- Exception and Error Handling
- Function and Class Coherence
- Guard Statements
- Nesting

[Official Microsoft Documentation](https://learn.microsoft.com/en-us/cpp/dotnet/dotnet-programming-with-cpp-cli-visual-cpp?view=msvc-170#see-also)

<!-- 
Script: 
 - ToDo.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[6.4] Modifying Existing Projects -->

## Modifying Existing Projects

Mirroring the existing styles when modifying a project refers to maintaining the same coding conventions, formatting, and naming conventions that have already been established in an existing project when making modifications or adding new code. By mirroring the existing styles, the modified code seamlessly integrates with the rest of the project and maintains a consistent and unified codebase.

- Coding Conventions
- Formatting
- Commenting
- File organisation

<!-- 
Script: 
 - ToDo.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[7} Testing  -->

![bg height:250px](<resources/slides/titles/Testing.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[7.1] Project Testing -->

## Project Testing

There are three types of testing to be covered in this project.

Testing Type         | Description                                                          | Implementation
---------------------|----------------------------------------------------------------------|---------------
Acceptance Testing   | Ensures the solution meets business requirements and is fit for purpose. | Performed through user scenarios and use cases to verify that the system fulfils its intended requirements.
Integration Testing  | Evaluates how different components or modules interact and operate together. | Conducted by combining individual units of the software and testing them as a group, ensuring that integrated units function as expected.
Unit Testing         | Focuses on individual parts (or units) of the software to ascertain they function correctly. | Utilises automated test cases written by the developer to test individual functions or methods within the application.

<!-- 
Script: 
 - Tell them about the project testing.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[7.2] Testing Document Reference -->

## Acceptance Testing Document

For every new code project, a test document is created and approved.

The following test document provides a set of user scenarios and user stories for each view in the front-end component of the application, allowing the user-interface to be formally and comprehensively tested:

[<img src="resources/images/microsoft/Excel.png" width="35px"> Support Tracker Test Document][test-doc-link]

<!-- 
Script: 
 - Tell them about the test document.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[7.3] Further testing through Unit Tests -->

## Further testing through Unit Tests

<div style="width:100%; height:100%" class="columns">

  <div>

  Although testing through code has yet to become standard practice at Tascomp,
  Support Tracker contains a variety of unit tests that perform various integration level and unit level tests through code.

  <br>

  ![width:150px](resources/images/icons/testing.svg)

  </div>

  <div>

  Here is minimal example of what this looks like in code:

  ![width:450px](<resources/images/code examples/Unit Test Example.svg>)

  </div>

</div>

<!-- 
Script: 
 - Tell them about the the unit test example.
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[8} Deployment  -->

![bg height:250px](<resources/slides/titles/Deployment.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[8.1} Steps  -->

# Where does it go?

Given that the development process previously mentioned has taken place, and a final release candidate has been built on the appropriate virtual machine, the `Support Tracker` front-end executable/s and back-end dynamic-link-libraries will be manually moved to the appropriate location on the `TSC-SERVER` and a shortcut will be added to the `Tascomp Shortcuts` directory on the main internal server.

If this system were a component within Tascomp's `Prodigy` or derived products, then it would automatically be included in the relevant installer and no manual actions would be required.

<!-- 
Script: 
 - Just say what is on the slide
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[9} User Guide -->

![bg height:250px](<resources/slides/titles/User Guide.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[9.1} User Guide Reference -->

## User Guide Reference

As per Tascomp's development process, a user guide document must be created for the application/s.

For a greater understanding of how a user would interface with the front-end components fo the project, please refer to the User Guide document:

[<img src="resources/images/microsoft/Word.png" width="35px"> User Guide Document][user-guide-link]

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[10} Design  -->

![bg height:250px](<resources/slides/titles/Design.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[10.1} Design Overview  -->

# Design Overview

The following slides describe the overall systems design using:

- Architecture
- Class Diagrams
- Entity Relationship Diagram
- Database Schema

<!-- 
Script: 
 - Provide an overview
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11} Architecture  -->

![bg height:250px](<resources/slides/titles/Architecture.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.1} C4 Model Overview  -->

# C4 Model Overview

- C4, encapsulating **Context**, **Containers**, **Components**, and **Code**, is a tailored blueprint for elucidating software architecture.
- Through its quad-tiered design, it shifts from a panoramic system overview to the minutiae of code constructs.
- This stratified schematic allows stakeholders to oscillate between the system's macroscopic function and its detailed operations effortlessly.
- When harnessed for charting out project architecture, C4 stands as a beacon of lucidity, harmonising interpretations, and smoothing dialogues.

<!-- 
Script: 
 - Provide an overview
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.2} Context Model -->

## C1 | Context Model

<div style="width:75%;">

  ![Context Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/c1/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Describe the context model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.3} Container Model -->

## C2 | Container Model

<div style="width:60%;">

  ![Container Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/c2/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Describe the container model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.4} Component Model : Storage Layer -->

## C3 | Component Model : Storage Layer

<div style="width:85%;">

  ![Storage Layer Component Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/C3STOR~1/TSC-SE~1.PNG)

</div>

<!-- 
Script: 
 - Describe the data access layer component model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.5} Component Model : Data Access Layer -->

## C3 | Component Model : Data Access Layer

<div style="width:85%;">

  ![Data Access Layer Component Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/C3DATA~1/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Describe the data access layer component model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.6} Component Model : Domain -->

## C3 | Component Model : Domain

<div style="width:90%;">

  ![Domain Component Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/C3DOMA~1/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Describe the domain component model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.7} Component Model : (View Layer) User Interface Components -->

## C3 | Component Model : View Layer

<div style="width:60%;">

  ![User Interface Component Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/C3UICO~1/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Describe the user interface components component model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.8} Code Model : User Interface Class Diagram -->

## C4 | Code Model : View Layer

![bg right 95% User Interface Class Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/code/views/views/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the user interface components class model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.9} Code Model : User Interface Tickets View Class Diagram -->

## C4 | Code Model : View Layer : Tickets View

![bg right 95% Tickets View Class Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/code/views/TICKET~2/SUPPOR~1.PNG)


<!-- 
Script: 
 - Describe the user interface tickets view class model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.10} Code Model : User Interface Ticket View Class Diagram -->

## C4 | Code Model : View Layer : Ticket View

![bg right 95% Ticket View Class Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/code/views/TICKET~1/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the user interface ticket view class model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.11} Code Model : User Interface Event View Class Diagram -->

## C4 | Code Model : View Layer : Event View

![bg right 75% Event View Class Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/code/views/EVENTV~1/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the user interface event view class model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.12} Code Model : Domain Class Diagram -->

## C4 | Code Model : Domain

<div style="width:80%;">

![Domain Class Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/code/domain/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Describe the domain class model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.13} Code Model : Data Access Layer Class Diagram -->

## C4 | Code Model : Data Access Layer

<div class="columns">
  <div style="width:500px">

  The Data Access Layer is made up of 3 component classes:

  - UI Contract
  - Database Interaction
  - Domain Data Mapper

  </div>
  <div style="width:500px">

  ![Data Access layer](<resources/images/snips/Data Access Layer.png>)

  </div>
</div>


<!-- ![bg right](<https://cdn.svgator.com/images/2022/01/404-svg-animation.svg>) -->

<!-- 
Script: 
 - Describe the data access layer class model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.14} Code Model : Database Entity Relationship Diagram -->

## C4 | Code Model : Storage Layer : Entity Relationships

![bg right 95% Entity Relationships Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/database/erd/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the storage layer entity relationship model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.15} Code Model : Database Base Entity Schema Diagram -->

## C4 | Code Model : Storage Layer : Base Entities Schema

![bg right 95% Base Table Entities Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/database/schema/BASETA~1/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the storage layer base entity schema model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.16} Code Model : Database Base Entity Schema Diagram -->

## C4 | Code Model : Storage Layer : Junction Entities Schema

![bg right 95% Junction Table Entities Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/database/schema/JUNCTI~1/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the storage layer junction entity schema model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[11.17} Code Model : Database Base Entity Schema Diagram -->

## C4 | Code Model : Storage Layer : Lookup Entities Schema

![bg right 95% Lookup Table Entities Diagram](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/database/schema/LOOKUP~1/SUPPOR~1.PNG)

<!-- 
Script: 
 - Describe the storage layer lookup entity schema model
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12} Code  -->

![bg height:250px](<resources/slides/titles/Code.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.1} Code Overview -->

## Code Overview

<div class="columns">
<div style="width:700px">

  As of writing this presentation, actual development has yet to commence and the design has yet to be reviewed and signed off.

  Due to this, the following code snippets are header `declaration` files from the current project's skeleton.

</div>
<div style="margin-left:200px;width:400px;float:right;">

<div class = "rounded_image">

![Furious Typing](resources/images/memes/Typing.gif)

</div>

</div>

</div>

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.2} Code Snippet -->

## Entity Base Class

The is the header declaration for the Entity Base Class

![bg right 95%](<resources/images/code examples/Entity.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.3} Code Snippet -->

## Ticket Class

The is the header declaration for the Ticket Class

![bg right 95%](<resources/images/code examples/ticket.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.4} Code Snippet -->

## Ticket Details Struct

The is the header declaration for the Ticket Details Struct

![bg right 80%](<resources/images/code examples/ticket details.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.5} Code Snippet -->

## Event Class

The is the header declaration for the Event Class

![bg right 95%](<resources/images/code examples/Event.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.6} Code Snippet -->

## Event Details Struct

The is the header declaration for the Event Details Struct

![bg right 95%](<resources/images/code examples/event details.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.7} Code Snippet -->

## Linked File Class

The is the header declaration for the Linked File Class

![bg right 95%](<resources/images/code examples/Linked File.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.8} Code Snippet -->

## Linked Mantis Reference Class

The is the header declaration for the Linked Mantis Reference Class

![bg right 95%](<resources/images/code examples/Linked Mantis Reference.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[12.9} Code Snippet -->

## Audit Action Class

The is the header declaration for the Audit Action Class

![bg right 95%](<resources/images/code examples/Audit Action.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[13} User Interface  -->

![bg height:250px](<resources/slides/titles/User Interface.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[13.1} User Interface  -->

## User Interface

The following slides are wireframes for the proposed tool prototype as described in the previous user-interface diagrams.

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[13.2} User Interface  -->

## Tickets View

This is the wireframe for the proposed tickets view *(displaying multiple tickets)*.

The tickets view is composed of a filtering section, and the list of tickets relative to the applied filtering.

![bg right 95%](<resources/images/wireframes/Exports/Tickets View.png>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[13.3} User Interface  -->

## Ticket View

This is the wireframe for the proposed ticket view.

The ticket view is composed of a section for displaying the ticket's details, the list of ticket's events, and the linked files and mantis entries.

![bg right 95%](<resources/images/wireframes/Exports/Ticket View.png>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[13.4} User Interface  -->

## Event View

This is the wireframe for the proposed event view, within a ticket.

The event view displays the event's details.

![bg right 95%](<resources/images/wireframes/Exports/Event View.png>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[14} Future Scope  -->

![bg height:250px](<resources/slides/titles/Future Scope.svg>)

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[14.1} Future Scope  -->

## Future Scope

Having developed the proposed solution for Support Tracker, the future scope may include:

- Alternative front-end solutions
- Introducing back-end components for handling notifications
- Integration with the existing Support Manager
- Extraction of data on to a live office display
- "AI" analysis of existing data

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[14.2} Future Scope : Context -->

## Future Scope : Context Model

Introduces alternative front-end solutions and back-end components.

<div style="width:60%;">

  ![Future Scope Context](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/FUTURE~1/c1/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[14.3} Future Scope : Container  -->

## Future Scope : Container Model

Introduces alternative front-end solutions and back-end components.

<div style="width:50%;">

  ![Future Scope Container](../../../../../../../../../PERSON~1/UNIVER~1/ASSESS~1/YEAR1~1/MODULE~4/DOCUME~1/PROJEC~1/UNIVER~1/slides/RESOUR~1/images/diagrams/ARCHIT~1/FUTURE~1/c2/SUPPOR~1.PNG)

</div>

<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->

---

<!-- Slides[15} Conclusion  -->

<div class="rows">

  <div style="width:500px">

  ![bg height:250px](<resources/slides/titles/Conclusion.svg>)

  </div>

  <div style="width:500px"> 
  
  <br>
  <br>
  <br>

  # Any Questions?
  
  </div>
</div>


<!-- 
Script: 
 - Wait a second
 - Move to next slide
 -->